#version 330

//Zmienne jednorodne
uniform mat4 P;
uniform mat4 V;
uniform mat4 M;


//Atrybuty
in vec4 vertex; //wspolrzedne wierzcholka w przestrzeni modelu
in vec4 color;  //kolor wierzcholka (na razie ignorowany)
in vec4 normal; //wektor normalny w wierzcholku w przestrzeni modelu
in vec2 texCoord0; //wspolrzedne teksturowania

//Zmienne interpolowane
out vec4 l; //wektor Do swiatla w przestrzeni oka
out vec4 n; //wektor normalny w przestrzeni oka
out vec4 v; //wektor Do obserwatora w przestrzeni oka
out vec2 iTexCoord0; //wspolrzedne teksturowania

void main(void) {
    vec4 lp = vec4(1, 0, 0, 1); //Wspolrzedne swiatla w przestrzeni OKA

    l = normalize(lp - V * M * vertex); //Wektor Do swiatla w przestrzeni oka
    n = normalize(V * M * normal); //Wektor normalny w wierzcholku w przestrzeni oka
    v = normalize(vec4(0, 0, 0, 1) - V * M * vertex); //Wektor Do obserwatora w przestrzeni oka

    iTexCoord0 = texCoord0; //Zapewnij interpolacje wspolrzednych teksturowania

	gl_Position = P * V * M * vertex;
}