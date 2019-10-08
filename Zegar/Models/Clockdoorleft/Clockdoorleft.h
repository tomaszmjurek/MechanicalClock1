#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Clockdoorleft : public Model {
public:
	Clockdoorleft(Shader* shader, Texture* tex, glm::vec3 pos);
	~Clockdoorleft();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }
	bool getOpen() { return open; }

	void drawObject(glm::mat4 mP, glm::mat4 mV);
	void prepareObject();

	bool getStatusOperate() { return doorOperate; }
	bool getStatus() { return open; }
	void changeOperate() { doorOperate = !doorOperate; }
	void changeOpen() { open = !open; }

private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	Texture* texture;
	bool open; // true open - false close
	bool doorOperate; // true perform false dont

};