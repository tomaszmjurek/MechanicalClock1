#include "Classes/headers/Texture.h"

Texture::Texture(std::string path) {
	handler = Graphics::readTexture(path);
}

Texture::~Texture() {
	glDeleteTextures(1, &handler);
}