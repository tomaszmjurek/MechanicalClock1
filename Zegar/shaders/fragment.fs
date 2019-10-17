#version 330

out vec4 pixelColor; //Zmienna wyjsciowa fragment shadera. Zapisuje sie do niej ostateczny (prawie) kolor piksela

in vec4 l; //Wektor do swiatla w przestrzeni oka
in vec4 n; //Wektor normalny w przestrzeni oka
in vec4 v; //Wektor do obserwatora w przestrzeni oka
in vec2 iTexCoord0; //Wspolrzedne teksturowania

//Zmienne reprezentujace jednostki teksturujace
uniform sampler2D textureMap0;

void main(void) {
	pixelColor = texture(textureMap0, iTexCoord0);
}