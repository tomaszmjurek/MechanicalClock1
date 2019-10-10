//Sphere model made out of triangles
//Contains arrays:
//vertices - vertex positions in homogenous coordinates
//normals - vertex normals in homogenous coordinates
//texCoords - texturing coordinates

#include "Models/Model.h"

	using namespace std;
	using namespace glm;

	class Sphere : public Model {

	public:
		Sphere();
		Sphere(float r, float mainDivs, float tubeDivs);
		~Sphere();

		void drawObject(glm::mat4 mP, glm::mat4 mV);
		void prepareObject();

	private:
		vector<vec4> internalVertices;
		vector<vec4> internalFaceNormals;
		vector<vec4> internalVertexNormals;
		float* normals;

		inline float d2r(float deg);
		vec4 generateSpherePoint(float r, float alpha, float beta);
		vec4 computeVertexNormal(float alpha, float beta);
		vec4 computeFaceNormal(vector<vec4>& face);
		void generateSphereFace(vector<vec4>& vertices, vector<vec4>& vertexNormals, vec4& faceNormal, float r, float alpha, float beta, float step_alpha, float step_beta);
		void buildSphere(float r, float divs1, float divs2);

	};
