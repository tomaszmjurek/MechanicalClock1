#pragma once

#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Bulb : public Model {
public:
	Bulb(Shader* shader, glm::vec3 pos);
	~Bulb();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }

	void prepareObject();
	void drawObject(glm::mat4 mP, glm::mat4 mV);


private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj�cy tablic� wsp�rz�dnych wierzcho�k�w
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj�cy tablick� wektor�w normalnych
};
