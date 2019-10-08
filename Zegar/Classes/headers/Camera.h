#pragma once

#include <glm/glm.hpp>

class Camera{
public:
	Camera();
	Camera(float x, float y, float z);
	Camera(float x, float y, float z, float rotAngle);
	Camera(float x, float y, float z, float rotAngle, float mvAngle);

	glm::vec3 getPosition() { return position; }
	float const getRotationAngle() { return rotationAngle; }
	float const getMoveAngle() { return moveAngle; }

	void setPosition(float x, float y, float z) { position = glm::vec3(x, y, z); }
	void setRotationAngle(float angle) { rotationAngle = fmod(angle, 360); }
	void setMoveAngle(float angle) { moveAngle = fmod(angle, 360); }

	void updatePostion(float x, float y, float z) { position = glm::vec3(position.x + x, position.y + y, position.z + z); }
	void updateRotationAngle(float angle) { rotationAngle = fmod(rotationAngle + angle, 360); }
	void updateMoveAngle(float angle) { moveAngle = fmod(moveAngle + angle, 360); }

private:
	glm::vec3 position;
	float rotationAngle;
	float moveAngle;
};