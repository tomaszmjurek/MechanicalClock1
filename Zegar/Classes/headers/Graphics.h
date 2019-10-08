#pragma once
#define GLEW_STATIC
#include <GL/glew.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>
#include "Classes/headers/lodepng.h"
#include "Classes/headers/Shader.h"

class Graphics{
public:
	static GLuint makeBuffer(void* data, int vertexCount, int vertexSize);
	static void assignVBOtoAttribute(Shader* shader, const char* attributeName, GLuint bufVBO, int vertexSize);
	static GLuint readTexture(std::string filename);
};