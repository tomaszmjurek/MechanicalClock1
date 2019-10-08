#include "Models/Lamp/Lamp.h"
#include "Models/Lamp/LampInternal.h"

Lamp::Lamp(Shader* shader, Shader* lShader, Texture* tex, glm::vec3 pos) {
	setName(LampInternal::name);
	setVertices(LampInternal::vertices);
	setVertexNormals(LampInternal::vertexNormals);
	setTexCoords(LampInternal::texCoords);
	setVertexCount(LampInternal::vertexCount);
	setShader(shader);
	setPostiotion(pos);
	texture = tex;
	lightShader = lShader;
	prepareObject();
}

Lamp::~Lamp() {
	glDeleteVertexArrays(1, &vao); //Usuniêcie vao
	glDeleteBuffers(1, &bufVertices); //Usuniêcie VBO z wierzcho³kami
	glDeleteBuffers(1, &bufNormals); //Usuniêcie VBO z wektorami normalnymi
	glDeleteBuffers(1, &bufTexCoords); //Usuniêcie VBO z teksturami
}

void Lamp::drawObject(glm::mat4 mP, glm::mat4 mV) {

	//W³¹czenie programu cieniuj¹cego, który ma zostaæ u¿yty do rysowania
	//W tym programie wystarczy³oby wywo³aæ to raz, w setupShaders, ale chodzi o pokazanie,
	//¿e mozna zmieniaæ program cieniuj¹cy podczas rysowania jednej sceny
	getShader()->use();

	//Przeka¿ do shadera macierze P,V i M.
	//W linijkach poni¿ej, polecenie:
	//  shaderProgram->getUniformLocation("P")
	//pobiera numer slotu odpowiadaj¹cego zmiennej jednorodnej o podanej nazwie
	//UWAGA! "P" w powy¿szym poleceniu odpowiada deklaracji "uniform mat4 P;" w vertex shaderze,
	//a mP w glm::value_ptr(mP) odpowiada argumentowi  "mat4 mP;" TYM pliku.
	//Ca³a poni¿sza linijka przekazuje do zmiennej jednorodnej P w vertex shaderze dane z argumentu mP niniejszej funkcji
	//Pozosta³e polecenia dzia³aj¹ podobnie.
	glUniformMatrix4fv(getShader()->getUniformLocation("P"), 1, false, glm::value_ptr(mP));
	glUniformMatrix4fv(getShader()->getUniformLocation("V"), 1, false, glm::value_ptr(mV));
	glUniformMatrix4fv(getShader()->getUniformLocation("M"), 1, false, glm::value_ptr(modelMatrix));
	glUniform1i(getShader()->getUniformLocation("textureMap0"), 0);
	setUniforms();
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture->getHandler());

	//Uaktywnienie VAO i tym samym uaktywnienie predefiniowanych w tym VAO powi¹zañ slotów atrybutów z tablicami z danymi
	glBindVertexArray(vao);

	//Narysowanie obiektu
	glDrawArrays(GL_TRIANGLES, 0, static_cast<unsigned int>(getVertexCount()));

	//Posprz¹tanie po sobie (niekonieczne w sumie je¿eli korzystamy z VAO dla ka¿dego rysowanego obiektu)
	glBindVertexArray(0);

	for (int i = 0; i < bulbs.size(); i++) {
		bulbs[i]->drawObject(mP, mV);
	}
}

void Lamp::prepareLights() {
	glm::mat4 mM = glm::mat4(1.0f);
	glm::vec4 pos = glm::vec4(-0.2f, -3.6f, -1.95f, 1);
	pos = modelMatrix * mM * pos;
	
	bulbs.push_back(new Bulb(lightShader, glm::vec3(pos)));

	glm::mat4 mM2 = glm::mat4(1.0f);
	glm::vec4 pos2 = glm::vec4(-1.47f, -3.6f, -1.2f, 1);
	pos2 = modelMatrix * mM2 * pos2;

	bulbs.push_back(new Bulb(lightShader, glm::vec3(pos2)));

	glm::mat4 mM3 = glm::mat4(1.0f);
	glm::vec4 pos3 = glm::vec4(1.85f, -3.6f, -0.77f, 1);
	pos3 = modelMatrix * mM3 * pos3;

	bulbs.push_back(new Bulb(lightShader, glm::vec3(pos3)));

	glm::mat4 mM4 = glm::mat4(1.0f);
	glm::vec4 pos4 = glm::vec4(1.85f, -3.6f, 0.77f, 1);
	pos4 = modelMatrix * mM4 * pos4;

	bulbs.push_back(new Bulb(lightShader, glm::vec3(pos4)));

	glm::mat4 mM5 = glm::mat4(1.0f);
	glm::vec4 pos5 = glm::vec4(-1.47f, -3.6f, 1.15f, 1);
	pos5 = modelMatrix * mM5 * pos5;

	bulbs.push_back(new Bulb(lightShader, glm::vec3(pos5)));

	glm::mat4 mM6 = glm::mat4(1.0f);
	glm::vec4 pos6 = glm::vec4(-0.2f, -3.6f, 1.95f, 1);
	pos6 = modelMatrix * mM6 * pos6;

	bulbs.push_back(new Bulb(lightShader, glm::vec3(pos6)));
}

void Lamp::prepareObject() {
	//Zbuduj VBO z danymi obiektu do narysowania
	bufVertices = Graphics::makeBuffer(getVertices(), getVertexCount(), sizeof(float) * 4); //VBO ze wspó³rzêdnymi wierzcho³ków
	bufNormals = Graphics::makeBuffer(getVertexNormals(), getVertexCount(), sizeof(float) * 4);//VBO z wektorami normalnymi wierzcho³ków
	bufTexCoords = Graphics::makeBuffer(getTexCoords(), getVertexCount(), sizeof(float) * 2);


	//Zbuduj VAO wi¹¿¹cy atrybuty z konkretnymi VBO
	glGenVertexArrays(1, &vao); //Wygeneruj uchwyt na VAO i zapisz go do zmiennej globalnej

	glBindVertexArray(vao); //Uaktywnij nowo utworzony VAO

	Graphics::assignVBOtoAttribute(getShader(), "vertex", bufVertices, 4); //"vertex" odnosi siê do deklaracji "in vec4 vertex;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "normal", bufNormals, 4); //"normal" odnosi siê do deklaracji "in vec4 normal;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "texCoord0", bufTexCoords, 2);

	glBindVertexArray(0); //Dezaktywuj VAO


	glm::mat4 mM = glm::mat4(1.0f);
	mM = glm::translate(mM, getPosition());
	glm::mat4 rotX = glm::rotate(glm::mat4(1.0f), 3.14f * 270 / 180, glm::vec3(0, 0, 1));

	mM = mM;
	modelMatrix = mM;
	prepareLights();
}

std::vector <glm::vec3> Lamp::lightPosition() {
	std::vector <glm::vec3> lights;
	for (int i = 0; i < bulbs.size(); i++) {
		lights.push_back( getPosition() * bulbs[i]->getPosition());
	}
	return lights;
}