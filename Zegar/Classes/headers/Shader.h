#pragma once
#include <gl/glew.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <glm/glm.hpp>

class Shader {
private:
	GLuint vertex;
	GLuint geometry;
	GLuint fragment;
	GLuint shaderProgram;
	GLuint loadShader(GLint type, std::string filename);
	std::vector<glm::vec3> lights;

public:
	Shader(std::string vertexFile, std::string geometryFile, std::string fragmentFile);
	~Shader();
	void use();
	GLuint getUniformLocation(std::string variable);
	GLuint getAttribLocation(std::string variable);
	void setLights(std::vector <glm::vec3> lightsPos) { lights = lightsPos; }
	std::vector<glm::vec3> getLights() { return lights; }

	void setUnifVec2(const std::string &name, const glm::vec2 &value) const
	{
		glUniform2fv(glGetUniformLocation(shaderProgram, name.c_str()), 1, &value[0]);
	}
	void setUnifVec3(const std::string &name, const glm::vec3 &value) const
	{
		glUniform3fv(glGetUniformLocation(shaderProgram, name.c_str()), 1, &value[0]);
	}
	void setUnifVec4(const std::string &name, const glm::vec4 &value) const
	{
		glUniform4fv(glGetUniformLocation(shaderProgram, name.c_str()), 1, &value[0]);
	}
	void setUnifMat2(const std::string &name, const glm::mat2 &mat) const
	{
		glUniformMatrix2fv(glGetUniformLocation(shaderProgram, name.c_str()), 1, GL_FALSE, &mat[0][0]);
	}
	void setUnifMat3(const std::string &name, const glm::mat3 &mat) const
	{
		glUniformMatrix3fv(glGetUniformLocation(shaderProgram, name.c_str()), 1, GL_FALSE, &mat[0][0]);
	}
	void setUnifMat4(const std::string &name, const glm::mat4 &mat) const
	{
		glUniformMatrix4fv(glGetUniformLocation(shaderProgram, name.c_str()), 1, GL_FALSE, &mat[0][0]);
	}
};