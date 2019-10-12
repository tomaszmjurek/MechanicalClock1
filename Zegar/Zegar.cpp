#include <iostream>
#include <cmath>
#include <map>
#include <ctime>
#define GLEW_STATIC
#include <GL/glew.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Classes/headers/Shader.h"
#include "Classes/headers/Camera.h"
#include "Models/AllModels.h"
#include "Classes/headers/Texture.h"
#include "config.h"

#include "Classes/headers/Graphics.h"

float aspect = 1; //Stosunek szerokoœci do wysokoœci okna

//Uchwyty na shadery
/*Shader* shaderProgram = config::defaultShader;*/ //WskaŸnik na obiekt reprezentuj¹cy program cieniuj¹cy.
Camera* camera = new Camera(config::cameraX, config::cameraY, config::cameraZ);

bool doorOperate = false;

std::map<std::string, Shader*> prepareShaders() {
	std::map<std::string, Shader*> shaders;

	shaders.insert(std::pair<std::string, Shader*>("default", new Shader("shaders/vertex.vs", "", "shaders/fragment.fs")));
	shaders.insert(std::pair<std::string, Shader*>("light", new Shader("shaders/lightVertex.vs", "", "shaders/lightFragment.fs")));
	shaders.insert(std::pair<std::string, Shader*>("fur", new Shader("shaders/furVertex.vs", "", "shaders/furFragment.fs")));
	
	return shaders;
}

std::map<std::string, Texture*> prepareTextures() {
	std::map<std::string, Texture*> textures;

	textures.insert(std::pair<std::string, Texture*>("brushedMetal", new Texture("Textures/metal-circle.png")));
	textures.insert(std::pair < std::string, Texture*>("clockFace", new Texture("Textures/clockface.png")));
	textures.insert(std::pair < std::string, Texture*>("clock", new Texture("Textures/zegar.png")));
	textures.insert(std::pair < std::string, Texture*>("black", new Texture("Textures/black.png")));
	textures.insert(std::pair < std::string, Texture*>("gold", new Texture("Textures/gold.png")));
	textures.insert(std::pair < std::string, Texture*>("space", new Texture("Textures/space.png")));
	textures.insert(std::pair < std::string, Texture*>("fur", new Texture("Textures/fur.png")));
	
	return textures;
}

std::map<std::string, Model*> prepareModels(std::map<std::string, Shader*> shaders, std::map<std::string, Texture*> textures) {
	time_t theTime = time(NULL);
	std::tm aTime{};
	localtime_s(&aTime, &theTime);
	int hours = aTime.tm_hour;
	int minutes = aTime.tm_min;
	int seconds = aTime.tm_sec;
	std::map<std::string, Model*> models;

	models.insert(std::pair<std::string, Model*>("Gear", new Gear(shaders["default"], textures["brushedMetal"], glm::vec3(0, 2.8f, -0.5f), 1.0f, 30.0f)));
	models.insert(std::pair<std::string, Model*>("BiggerGear", new Gear(shaders["default"], textures["brushedMetal"], glm::vec3(0, 2.8f, 0.5f), 1.2f, 0.0f)));
	models.insert(std::pair<std::string, Model*>("Pendulum", new Pendulum(shaders["default"], textures["brushedMetal"], glm::vec3(0.2f, 2.8f, 0), 30.0f)));
	models.insert(std::pair<std::string, Model*>("ClockFace", new ClockFace(shaders["default"], textures["clockFace"], glm::vec3(-1.0f, 5.5f, 0))));
	models.insert(std::pair<std::string, Model*>("HoursIndicator", new HoursIndicator(shaders["default"], textures["black"], models["ClockFace"]->getPosition(), (hours % 12) * 30 + (minutes / float(60)) * 30 + (seconds / float(60)) * 6)));
	models.insert(std::pair<std::string, Model*>("MinIndicator", new MinIndicator(shaders["default"], textures["black"], models["ClockFace"]->getPosition(), minutes * 6 + seconds * 0.1 )));
	models.insert(std::pair<std::string, Model*>("SecIndicator", new SecIndicator(shaders["default"], textures["black"], models["ClockFace"]->getPosition(), seconds * 6)));
	models.insert(std::pair<std::string, Model*>("Clock", new Clock(shaders["default"], textures["clock"], glm::vec3(0, 0.0f, 0))));
	models.insert(std::pair<std::string, Model*>("Sphere", new Backstage(shaders["default"], textures["space"], glm::vec3(0.0f, 0.0f, 0))));
	models.insert(std::pair<std::string, Model*>("Carpet", new Carpet(shaders["fur"], textures["gold"], textures["fur"], glm::vec3(0.0f, 0.0f, 0))));
	models.insert(std::pair<std::string, Model*>("Star", new Star(shaders["default"], shaders["light"], textures["black"], glm::vec3(5.0f, 15.0f, 5.0f))));

	return models;
}

void updateShaders(std::map<std::string, Shader*> shaders, Star* stars) {
	for (std::map<std::string, Shader*>::iterator it = shaders.begin(); it != shaders.end(); it++) {
		it->second->setLights(stars->lightPosition());
	}
}

//Procedura obs³ugi b³êdów
void error_callback(int error, const char* description) {
	fputs(description, stderr);
}

//Procedura obs³ugi klawiatury
void key_callback(GLFWwindow* window, int key,
	int scancode, int action, int mods) {
	if (action == GLFW_PRESS || action == GLFW_REPEAT) {
		if (key == GLFW_KEY_LEFT) camera->updateRotationAngle(-1 * config::cameraRotationAngleChange);
		if (key == GLFW_KEY_RIGHT) camera->updateRotationAngle(config::cameraRotationAngleChange);
		if (key == GLFW_KEY_UP) {
			camera->updateMoveAngle(config::cameraMoveAngleChange);
			camera->updatePostion(cos(3.14f * camera->getRotationAngle() / 180), config::cameraMoveFactor * sin(camera->getMoveAngle() * 3.14 / 180), sin(3.14f * camera->getRotationAngle() / 180));
		}
		if (key == GLFW_KEY_DOWN) {
			camera->updateMoveAngle(-config::cameraMoveAngleChange);
			camera->updatePostion(-cos(3.14f * camera->getRotationAngle() / 180), -config::cameraMoveFactor * sin(camera->getMoveAngle() * 3.14 / 180), -sin(3.14f * camera->getRotationAngle() / 180));
		}
	}
}

//Procedura ob³ugi zmiany rozmiaru bufora ramki
void windowResize(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height); //Obraz ma byæ generowany w oknie o tej rozdzielczoœci
	if (height != 0) {
		aspect = (float)width / (float)height; //Stosunek szerokoœci do wysokoœci okna
	}
	else {
		aspect = 1;
	}
}



//Procedura inicjuj¹ca
void initOpenGLProgram(GLFWwindow* window) {
	//************Tutaj umieszczaj kod, który nale¿y wykonaæ raz, na pocz¹tku programu************
	
	glClearColor(0.0f, 0.0f, 0.0f, 1);
	glEnable(GL_DEPTH_TEST); //W³¹cz u¿ywanie Z-Bufora
	glfwSetKeyCallback(window, key_callback); //Zarejestruj procedurê obs³ugi klawiatury
	glfwSetFramebufferSizeCallback(window, windowResize); //Zarejestruj procedurê obs³ugi zmiany rozmiaru bufora ramki
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	//glEnable(GL_CULL_FACE);
}

//Zwolnienie zasobów zajêtych przez program
void freeOpenGLProgram(std::map<std::string, Model*>& models, std::map<std::string, Shader*>& shaders, std::map<std::string, Texture*>& textures) {
	for (std::map<std::string, Model*>::iterator it = models.begin(); it != models.end(); it++) {
		delete it->second;
	}

	for (std::map<std::string, Shader*>::iterator it = shaders.begin(); it != shaders.end(); it++) {
		delete it->second;
	}

	for (std::map<std::string, Texture*>::iterator it = textures.begin(); it != textures.end(); it++) {
		delete it->second;
	}
	models.clear();
	shaders.clear();
	textures.clear();
}

//Procedura rysuj¹ca zawartoœæ sceny
void drawScene(GLFWwindow* window, std::map<std::string, Model*>& models) {
	//************Tutaj umieszczaj kod rysuj¹cy obraz******************l

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //Wykonaj czyszczenie bufora kolorów

	glm::mat4 P = glm::perspective(50 * 3.1415f / 180, aspect, 1.0f, 50.0f); //Wylicz macierz rzutowania

	glm::mat4 V = glm::lookAt( //Wylicz macierz widoku
		camera->getPosition(),
		glm::vec3(cos(3.14*camera->getRotationAngle() / 180), 0, sin(3.14*camera->getRotationAngle() / 180)) + camera->getPosition(),
		glm::vec3(0.0f, 1.0f, 0.0f));

	if (glfwGetTime() >= 1) {
		models["Gear"]->updateAngle(5.0f);
		models["BiggerGear"]->updateAngle(-5.0f);
		models["Pendulum"]->changeDirection();
		models["HoursIndicator"]->updateAngle(1/float(120));
		models["SecIndicator"]->updateAngle(6.0f);
		models["MinIndicator"]->updateAngle(0.1f);
		glfwSetTime(0); //Wyzeruj licznik czasu
	}
	
	for (std::map<std::string, Model*>::iterator it = models.begin(); it != models.end(); it++) {
		it->second->drawObject(P, V);
	}

	//Przerzuæ tylny bufor na przedni
	glfwSwapBuffers(window);
}

int main(void) {
	std::map<std::string, Model*> models;
	std::map<std::string, Shader*> shaders;
	std::map<std::string, Texture*> textures;

	GLFWwindow* window; //WskaŸnik na obiekt reprezentuj¹cy okno

	glfwSetErrorCallback(error_callback);//Zarejestruj procedurê obs³ugi b³êdów

	if (!glfwInit()) { //Zainicjuj bibliotekê GLFW
		fprintf(stderr, "Nie mo¿na zainicjowaæ GLFW.\n");
		exit(EXIT_FAILURE);
	}

	window = glfwCreateWindow(500, 500, "OpenGL", NULL, NULL);  //Utwórz okno 500x500 o tytule "OpenGL" i kontekst OpenGL.

	if (!window) { //Je¿eli okna nie uda³o siê utworzyæ, to zamknij program
		fprintf(stderr, "Nie mo¿na utworzyæ okna.\n");
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window); //Od tego momentu kontekst okna staje siê aktywny i polecenia OpenGL bêd¹ dotyczyæ w³aœnie jego.
	glfwSwapInterval(1); //Czekaj na 1 powrót plamki przed pokazaniem ukrytego bufora

	if (glewInit() != GLEW_OK) { //Zainicjuj bibliotekê GLEW
		fprintf(stderr, "Nie mo¿na zainicjowaæ GLEW.\n");
		exit(EXIT_FAILURE);
	}

	initOpenGLProgram(window); //Operacje inicjuj¹ce
	shaders = prepareShaders();
	textures = prepareTextures();
	models = prepareModels(shaders, textures);

	updateShaders(shaders, dynamic_cast<Star*>(models["Star"]));

	glfwSetTime(0); //Wyzeruj licznik czasu

	//G³ówna pêtla
	while (!glfwWindowShouldClose(window)) { //Tak d³ugo jak okno nie powinno zostaæ zamkniête
		drawScene(window, models); //Wykonaj procedurê rysuj¹c¹
		glfwPollEvents(); //Wykonaj procedury callback w zaleznoœci od zdarzeñ jakie zasz³y.
	}

	freeOpenGLProgram(models, shaders, textures);

	glfwDestroyWindow(window); //Usuñ kontekst OpenGL i okno
	glfwTerminate(); //Zwolnij zasoby zajête przez GLFW
	exit(EXIT_SUCCESS);
}