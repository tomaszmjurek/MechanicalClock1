#include "sphere.h"

# define M_PI           3.14159265358979323846

	Sphere::Sphere() {
		buildSphere(1, 12, 12);
	}

	Sphere::Sphere(float r, float divs1, float divs2) {
		buildSphere(r, divs1, divs2);
	}

	Sphere::~Sphere() {
	}

	inline float Sphere::d2r(float deg) {
		return M_PI * deg / 180.0f;
	}

	vec4 Sphere::generateSpherePoint(float r, float alpha, float beta) {
		alpha = d2r(alpha);
		beta = d2r(beta);
		return vec4(r * cos(alpha) * cos(beta), r * cos(alpha) * sin(beta), r * sin(alpha), 1.0f);
	}

	vec4 Sphere::computeVertexNormal(float alpha, float beta) {
		alpha = d2r(alpha);
		beta = d2r(beta);
		return vec4(cos(alpha) * cos(beta), cos(alpha) * sin(beta), sin(alpha), 0.0f);
	}

	vec4 Sphere::computeFaceNormal(vector<vec4>& face) {
		vec3 a = vec3(face[1] - face[0]);
		vec3 b = vec3(face[2] - face[0]);

		return normalize(vec4(cross(b, a), 0.0f));
	}

	void Sphere::generateSphereFace(vector<vec4>& vertices, vector<vec4>& vertexNormals, vec4& faceNormal, float r, float alpha, float beta, float step_alpha, float step_beta) {
		vertices.clear();
		vertexNormals.clear();

		vertices.push_back(generateSpherePoint(r, alpha, beta));
		vertices.push_back(generateSpherePoint(r, alpha + step_alpha, beta));
		vertices.push_back(generateSpherePoint(r, alpha + step_alpha, beta + step_beta));
		vertices.push_back(generateSpherePoint(r, alpha, beta + step_beta));

		faceNormal = computeFaceNormal(vertices);

		vertexNormals.push_back(computeVertexNormal(alpha, beta));
		vertexNormals.push_back(computeVertexNormal(alpha + step_alpha, beta));
		vertexNormals.push_back(computeVertexNormal(alpha + step_alpha, beta + step_beta));
		vertexNormals.push_back(computeVertexNormal(alpha, beta + step_beta));
	}



	void Sphere::buildSphere(float r, float mainDivs, float tubeDivs) {
		vector<vec4> face;
		vector<vec4> faceVertexNormals;
		vec4 normal;

		internalVertices.clear();
		internalFaceNormals.clear();
		internalVertexNormals.clear();

		float mult_alpha = 180.0f / tubeDivs;
		float mult_beta = 360.0f / mainDivs;

		for (int alpha = 0; alpha < round(tubeDivs); alpha++) {
			for (int beta = 0; beta < round(mainDivs); beta++) {

				generateSphereFace(face, faceVertexNormals, normal, r, alpha * mult_alpha - 90.0f, beta * mult_beta, mult_alpha, mult_beta);

				internalVertices.push_back(face[0]);
				internalVertices.push_back(face[1]);
				internalVertices.push_back(face[2]);

				internalVertices.push_back(face[0]);
				internalVertices.push_back(face[2]);
				internalVertices.push_back(face[3]);

				internalVertexNormals.push_back(faceVertexNormals[0]);
				internalVertexNormals.push_back(faceVertexNormals[1]);
				internalVertexNormals.push_back(faceVertexNormals[2]);

				internalVertexNormals.push_back(faceVertexNormals[0]);
				internalVertexNormals.push_back(faceVertexNormals[2]);
				internalVertexNormals.push_back(faceVertexNormals[3]);

				for (int i = 0; i < 6; i++) internalFaceNormals.push_back(normal);


			}
		}

		setVertices( (float*)internalVertices.data());
		normals = (float*)internalFaceNormals.data();
		setVertexNormals ((float*)internalVertexNormals.data());
		setTexCoords ( getVertexNormals());
		setVertexCount( internalVertices.size());
	}

	void Sphere::prepareObject()
	{
	}

	void Sphere::drawObject(glm::mat4 mP, glm::mat4 mV) {
		bool smooth = true;

		glEnableVertexAttribArray(0);
		glEnableVertexAttribArray(1);
		glEnableVertexAttribArray(2);
		//glEnableVertexAttribArray(3);


		glVertexAttribPointer(0, 4, GL_FLOAT, false, 0, getVertices());
		if (!smooth) glVertexAttribPointer(1, 4, GL_FLOAT, false, 0, normals);
		else glVertexAttribPointer(1, 4, GL_FLOAT, false, 0, getVertexNormals());
		glVertexAttribPointer(2, 4, GL_FLOAT, false, 0, getTexCoords());
		//glVertexAttribPointer(3,4,GL_FLOAT,false,0,Models::CubeInternal::colors);

		glDrawArrays(GL_TRIANGLES, 0, getVertexCount());

		glColor3b(0.7, 0.7, 0);

		glDisableVertexAttribArray(0);
		glDisableVertexAttribArray(1);
		glDisableVertexAttribArray(2);
		//glDisableVertexAttribArray(3);
	}
