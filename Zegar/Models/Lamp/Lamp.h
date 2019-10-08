#pragma once

#include "Models/Model.h"
#include "Classes/headers/Texture.h"
#include "Models/Bulb/Bulb.h"

class Lamp : public Model {
public:
	Lamp(Shader* shader, Shader* lShader, Texture* tex, glm::vec3 pos);
	~Lamp();

	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }
	glm::mat4 getModelMatrix() { return modelMatrix; }
	std::vector<glm::vec3> lightPosition();

	void prepareObject();
	void prepareLights();
	void drawObject(glm::mat4 mP, glm::mat4 mV);


private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	Texture* texture;
	Shader* lightShader;
	glm::mat4 modelMatrix;
	std::vector <Bulb*> bulbs;
};