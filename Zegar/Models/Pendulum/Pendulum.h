#pragma once
#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Pendulum: public Model {
	public:
		Pendulum(Shader* shader, Texture* tex, glm::vec3 pos, float deg);
		~Pendulum();

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
		void changeDirection() { direction = !direction; }

private:
	bool direction; // 0 left -> right | 1 right -> left
	float angle;
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	Texture* texture;
};