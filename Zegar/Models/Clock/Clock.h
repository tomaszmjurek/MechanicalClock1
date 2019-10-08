#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Clock : public Model {
public:
	Clock(Shader* shader, Texture* tex, glm::vec3 pos);
	~Clock();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }

	void drawObject(glm::mat4 mP, glm::mat4 mV);
	void prepareObject();

private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	Texture* texture;

};