
#include "Polygon.h"

Polygon::Polygon(double width, double height, char* type)
{
	this->width = width;
	this->height = height;
	
	int len = strlen(type) + 1;
	this->type = new char[len];
	strcpy(this->type, type);
}

Polygon::~Polygon()
{
	width = 0;
	height = 0;
	if (this->type != NULL) { delete []this->type; }
}

void Polygon::ShowInfo()
{
	cout << "Å¸ÀÔ: " << type << endl;
	cout << "Æø: " << width << endl;
	cout << "³ôÀÌ: " << height << endl;
}
