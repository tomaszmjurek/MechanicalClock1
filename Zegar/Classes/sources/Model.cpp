#include "Models/Model.h"

void Model::setUniforms() {

	shader->setUnifVec3("swiatlo", getShader()->getLights()[0]);
}