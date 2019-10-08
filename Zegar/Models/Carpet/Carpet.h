#pragma once

#include "Models/Model.h"
#include "Classes/headers/Texture.h"

class Carpet : public Model {
public:
	Carpet(Shader* shader, Texture* tex, Texture* tex2, glm::vec3 pos);
	~Carpet();
	
	GLuint getVao() { return vao; }
	GLuint getBufVertices() { return bufVertices; }
	GLuint getBufNormals() { return bufNormals; }
	GLuint getBufTexCoords() { return bufTexCoords; }
	std::vector<Texture*> getTexture() { return textures; }

	void prepareObject();
	void drawObject(glm::mat4 mP, glm::mat4 mV);


private:
	GLuint vao;
	GLuint bufVertices; //Uchwyt na bufor VBO przechowuj¹cy tablicê wspó³rzêdnych wierzcho³ków
	GLuint bufNormals; //Uchwyt na bufor VBO przechowuj¹cy tablickê wektorów normalnych
	GLuint bufTexCoords;
	std::vector<Texture*> textures;
};