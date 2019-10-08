#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class SecIndicator : public Model {
public:
	SecIndicator(Shader* shader, Texture* tex, glm::vec3 pos, float deg);
	~SecIndicator();

	float getAngle() { return angle; }
	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	Texture* getTexture() { return texture; }

	void SetAngle(float newAngle) { angle = newAngle; }
	void updateAngle(float newAngle) { angle += newAngle; }

	void drawObject(glm::mat4 mP, glm::mat4 mV);
	void prepareObject();

private:
	float angle;
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj�cy tablic� wsp�rz�dnych wierzcho�k�w
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj�cy tablick� wektor�w normalnych
	GLuint bufTexCoords;
	Texture* texture;
};