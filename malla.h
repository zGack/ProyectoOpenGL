#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm/glm.h"

class Malla
{
	GLMmodel* objmodel_ptr;

public:
	Malla();

	void DibujarMalla(float aX, float aY, float aZ);

	~Malla();
};