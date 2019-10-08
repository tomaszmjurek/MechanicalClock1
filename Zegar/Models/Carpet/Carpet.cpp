#include "Models/Carpet/Carpet.h"
#include "Models/Carpet/CarpetInternal.h"

Carpet::Carpet(Shader* shader, Texture* tex, Texture* tex2, glm::vec3 pos) {
	setName(CarpetInternal::name);
	setVertices(CarpetInternal::vertices);
	setVertexNormals(CarpetInternal::vertexNormals);
	setTexCoords(CarpetInternal::texCoords);
	setVertexCount(CarpetInternal::vertexCount);
	setShader(shader);
	setPostiotion(pos);
	textures.push_back(tex);
	textures.push_back(tex2);
	prepareObject();
}

Carpet::~Carpet() {
	glDeleteVertexArrays(1, &vao); //Usuni�cie vao
	glDeleteBuffers(1, &bufVertices); //Usuni�cie VBO z wierzcho�kami
	glDeleteBuffers(1, &bufNormals); //Usuni�cie VBO z wektorami normalnymi
	glDeleteBuffers(1, &bufTexCoords); //Usuni�cie VBO z teksturami
}

void Carpet::drawObject(glm::mat4 mP, glm::mat4 mV) {
	//Wylicz macierz modelu rysowanego obiektu

	glm::mat4 mM = glm::mat4(1.0f);
	mM = glm::translate(mM, getPosition());
	mM = glm::translate(mM, glm::vec3(0, 0, 0));
	glm::mat4 rotZ = glm::rotate(glm::mat4(1.0f), 3.14f * 90 / 180, glm::vec3(0, 0, 1));
	glm::mat4 rotY = glm::rotate(glm::mat4(1.0f), 3.14f * 90 / 180, glm::vec3(0, 1, 0));

	mM = mM;


	//W��czenie programu cieniuj�cego, kt�ry ma zosta� u�yty do rysowania
	//W tym programie wystarczy�oby wywo�a� to raz, w setupShaders, ale chodzi o pokazanie,
	//�e mozna zmienia� program cieniuj�cy podczas rysowania jednej sceny
	//getShader()->use();

	//Przeka� do shadera macierze P,V i M.
	//W linijkach poni�ej, polecenie:
	//  shaderProgram->getUniformLocation("P")
	//pobiera numer slotu odpowiadaj�cego zmiennej jednorodnej o podanej nazwie
	//UWAGA! "P" w powy�szym poleceniu odpowiada deklaracji "uniform mat4 P;" w vertex shaderze,
	//a mP w glm::value_ptr(mP) odpowiada argumentowi  "mat4 mP;" TYM pliku.
	//Ca�a poni�sza linijka przekazuje do zmiennej jednorodnej P w vertex shaderze dane z argumentu mP niniejszej funkcji
	//Pozosta�e polecenia dzia�aj� podobnie.
	glUniformMatrix4fv(getShader()->getUniformLocation("P"), 1, false, glm::value_ptr(mP));
	glUniformMatrix4fv(getShader()->getUniformLocation("V"), 1, false, glm::value_ptr(mV));
	glUniformMatrix4fv(getShader()->getUniformLocation("M"), 1, false, glm::value_ptr(mM));
	glUniform1f(getShader()->getUniformLocation("maxFurLength"), 0.6);
	glUniform1f(getShader()->getUniformLocation("maxLayer"), 100);
	glUniform1i(getShader()->getUniformLocation("textureMap0"), 0);
	glUniform1i(getShader()->getUniformLocation("textureMap1"), 1);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, textures[0]->getHandler());
	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, textures[1]->getHandler());

	//Uaktywnienie VAO i tym samym uaktywnienie predefiniowanych w tym VAO powi�za� slot�w atrybut�w z tablicami z danymi
	glBindVertexArray(vao);

	//Narysowanie obiektu
	glDrawArraysInstanced(GL_TRIANGLES, 0, static_cast<unsigned int>(getVertexCount()),100);

	//Posprz�tanie po sobie (niekonieczne w sumie je�eli korzystamy z VAO dla ka�dego rysowanego obiektu)
	glBindVertexArray(0);
}

void Carpet::prepareObject() {
	//Zbuduj VBO z danymi obiektu do narysowania
	bufVertices = Graphics::makeBuffer(getVertices(), getVertexCount(), sizeof(float) * 4); //VBO ze wsp�rz�dnymi wierzcho�k�w
	bufNormals = Graphics::makeBuffer(getVertexNormals(), getVertexCount(), sizeof(float) * 4);//VBO z wektorami normalnymi wierzcho�k�w
	bufTexCoords = Graphics::makeBuffer(getTexCoords(), getVertexCount(), sizeof(float) * 2);


	//Zbuduj VAO wi���cy atrybuty z konkretnymi VBO
	//glGenVertexArrays(1, &vao); //Wygeneruj uchwyt na VAO i zapisz go do zmiennej globalnej

	//glBindVertexArray(vao); //Uaktywnij nowo utworzony VAO

	Graphics::assignVBOtoAttribute(getShader(), "vertex", bufVertices, 4); //"vertex" odnosi si� do deklaracji "in vec4 vertex;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "normal", bufNormals, 4); //"normal" odnosi si� do deklaracji "in vec4 normal;" w vertex shaderze
	Graphics::assignVBOtoAttribute(getShader(), "texCoord0", bufTexCoords, 2);

	glBindVertexArray(0); //Dezaktywuj VAO
}