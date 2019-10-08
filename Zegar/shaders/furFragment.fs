#version 330

out vec4 pixelColor; //Zmienna wyjsciowa fragment shadera. Zapisuje sie do niej ostateczny (prawie) kolor piksela

in vec4 l; //Wektor do swiatla w przestrzeni oka
in vec4 n; //Wektor normalny w przestrzeni oka
in vec4 v; //Wektor do obserwatora w przestrzeni oka
in vec2 iTexCoord0; //Wspolrzedne teksturowania
in float layer; //aktualna warstwa

//Zmienne reprezentujace jednostki teksturujace
uniform sampler2D textureMap0;
uniform sampler2D textureMap1;

void main(void) {
    vec4 ka=vec4(0,0,0,0); //Kolor obiektu w swietle otoczenia
    vec4 kd=texture(textureMap0,iTexCoord0); //Kolor obiektu w swietle rozproszonym
    vec4 ks=texture(textureMap1,iTexCoord0); //Kolor obiektu w swietle odbitym

    vec4 la=vec4(0,0,0,0); //Kolor swiatla otoczenia
    vec4 ld=vec4(1,1,1,1); //Kolor swiatla rozpraszanego
    vec4 ls=vec4(1,1,1,0); //Kolor swiatla odbijanego

    vec4 ml=normalize(l);
    vec4 mn=normalize(n);
    vec4 mv=normalize(v);
    vec4 mr=reflect(-ml,mn);

    float nl=max(dot(mn,ml),0); //Kosinus kata pomiedzy wektorami do swiatla i normalnym
    float rv=pow(max(dot(mr,mv),0),10); //Kosinus kata pomiedzy wektorami odbitym i do obserwatora do potegi 10

	vec4 fur=texture(textureMap0,iTexCoord0); //futro (jest wlos?)
	vec4 furCol=texture(textureMap1,iTexCoord0); //kolor futra
	vec4 col=furCol;                          //domy�lny kolor
	//Je�eli nie pierwsza warstwa to dodaj alfa z teks. futra
	if (layer!=0) col=vec4(furCol.rgb,fur.a);
	// Usu� niewidoczny fragment, Z Bufor pozostanie bez zmian
	if (fur.a==0 && layer!=0) discard; 
	pixelColor=col*vec4(nl,nl,nl,1);       //wynikowy kolor
}
