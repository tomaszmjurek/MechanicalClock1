#pragma once

#include <vector>
#include "config.h"
#include "Classes/headers/Shader.h"
#include "Classes/headers/Graphics.h"

class Model {
	public:
		virtual ~Model() {};
		int getVertexCount() { return vertexCount; }
		float* getVertices() { return vertices; }
		float* getVertexNormals() { return vertexNormals; }
		float* getTexCoords() { return texCoords; }
		std::string getName() { return name; }
		Shader* getShader() { return shader; }
		glm::vec3 getPosition() { return position; }

		void setName(std::string newName) { name = newName; }
		void setVertexCount(int vertexNumber) { vertexCount = vertexNumber; }
		void setVertices(float* verticesArray) { vertices = verticesArray; }
		void setVertexNormals(float* vertexNormalsArray) { vertexNormals = vertexNormalsArray; }
		void setTexCoords(float* texCoordsArray) { texCoords = texCoordsArray; }
		void setShader(Shader* newShader) { shader = newShader; }
		void setPostiotion(glm::vec3 pos) { position = pos; }
		void setUniforms();

		virtual void drawObject(glm::mat4 mP, glm::mat4 mV) = 0;
		virtual void prepareObject() = 0;

		virtual void updateAngle(float newAngle) {}
		virtual void changeDirection() {}
		virtual bool getDirection() { return false; }
		virtual bool getStatusOperate() { return false; }
		virtual bool getStatus() { return false; }
		virtual void changeOperate() {}
		virtual void changeOpen() {}
		virtual int getIteration() { return 0; };
		virtual void incrementIteration() {}
		virtual void clearIteration() {}

	private:
		std::string name;
		int vertexCount;
		float* vertices;
		float* vertexNormals;
		float* texCoords;
		Shader* shader;
		glm::vec3 position;
};