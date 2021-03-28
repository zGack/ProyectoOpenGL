#include "mill.h"

Mill::Mill() {
	objmodel_ptr = NULL;

	if (!objmodel_ptr) {
		objmodel_ptr = glmReadOBJ("./mallas/mill.obj");
		//objmodel_ptr = glmReadOBJ("./mallas/Base mundo/base_mundo.obj");
		if (!objmodel_ptr)
			exit(0);

		glmUnitize(objmodel_ptr);
		glmFacetNormals(objmodel_ptr);
		glmVertexNormals(objmodel_ptr, 90.0);
		glmScale(objmodel_ptr, 0.2);
	}
}

void Mill::DibujarMill(float aX, float aY, float aZ) {

	glPushMatrix();

	glTranslatef(aX, aY, aZ);
	glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);

	glPopMatrix();
}



Mill::~Mill() {}