#include "Classes/headers/Camera.h"

Camera::Camera()
	:position(glm::vec3(0.0f, 0.0f, 0.0f)),
	rotationAngle(0.0f),
	moveAngle(0.0f)
{};

Camera::Camera(float x, float y, float z)
	:position(glm::vec3(x, y, z)),
	rotationAngle(0.0f),
	moveAngle(0.0f)
{};

Camera::Camera(float x, float y, float z, float rotAngle)
	:position(glm::vec3(x, y, z)),
	rotationAngle(rotAngle),
	moveAngle(0.0f)
{};

Camera::Camera(float x, float y, float z, float rotAngle, float mvAngle)
	:position(glm::vec3(x, y, z)),
	rotationAngle(rotAngle),
	moveAngle(mvAngle)
{};
