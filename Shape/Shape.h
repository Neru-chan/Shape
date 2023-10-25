#pragma once
#include "Point2D/Point2D.h"

class Shape {
public:
	Shape();
	virtual ~Shape();
	virtual float perimeter() = 0;
	virtual float area() = 0;
private:

};