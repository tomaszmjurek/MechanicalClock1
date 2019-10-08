#version 330

out vec4 pixelColor; //Zmienna wyjsciowa fragment shadera. Zapisuje sie do niej ostateczny (prawie) kolor piksela

in vec4 color;

//Zmienne reprezentujace jednostki teksturujace
uniform sampler2D textureMap0;

void main(void) {
	pixelColor = color;
}