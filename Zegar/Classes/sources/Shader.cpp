#include "Classes/headers/Shader.h"

GLuint Shader::loadShader(GLint type, std::string filename) {
	// loading shader from file
	std::string code;
	std::ifstream shaderFile;
	shaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	try {
		shaderFile.open(filename);
		std::stringstream shaderFileStream;
		shaderFileStream << shaderFile.rdbuf();
		shaderFile.close();
		code = shaderFileStream.str();
	} catch (std::ifstream::failure e) {
		std::cout << "Error: couldn't load shader file " << filename << std::endl;
	}

	// compile shader
	const char * shaderCode = code.c_str();
	GLuint shader = glCreateShader(type);
	glShaderSource(shader, 1, &shaderCode, NULL);
	glCompileShader(shader);

	// error handling
	int success;
	char infoLog[512];
	glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
	if (!success) {
		glGetShaderInfoLog(shader, 512, NULL, infoLog);
		std::cout << "Error: couldn't compile " << type << " shader\n" << infoLog << std::endl;
	};
	
	return shader;
}

Shader::Shader(std::string vertexFile, std::string geometryFile, std::string fragmentFile) {
	// load files
	vertex = loadShader(GL_VERTEX_SHADER, vertexFile);
	geometry = (geometryFile.empty()) ? (0) : (loadShader(GL_GEOMETRY_SHADER, geometryFile));
	fragment = loadShader(GL_FRAGMENT_SHADER, fragmentFile);

	// create shader program
	shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, vertex);
	if (geometryFile.empty()) glAttachShader(shaderProgram, geometry);
	glAttachShader(shaderProgram, fragment);
	glLinkProgram(shaderProgram);

	// error handling
	int success;
	char infoLog[512];
	glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
	if (!success) {
		glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
		std::cout << "Error: couldn't link shader program\n" << infoLog << std::endl;
	}
}
Shader::~Shader() {
	glDetachShader(shaderProgram, vertex);
	if (geometry != NULL) glDetachShader(shaderProgram, geometry);
	glDetachShader(shaderProgram, fragment);

	glDeleteShader(vertex);
	if (geometry != NULL) glDeleteShader(geometry);
	glDeleteShader(fragment);

	glDeleteProgram(shaderProgram);
}
void Shader::use() {
	glUseProgram(shaderProgram);
}
GLuint Shader::getUniformLocation(std::string variable) {
	return glGetUniformLocation(shaderProgram, variable.c_str());
}
GLuint Shader::getAttribLocation(std::string variable) {
	return glGetAttribLocation(shaderProgram, variable.c_str());
}