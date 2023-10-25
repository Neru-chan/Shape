#include "Shape.h"

#pragma once
class Triangle : Shape{
public:

	Triangle(const Point2D&, const Point2D&, const Point2D&);
	~Triangle();

	// Inherited via Shape
	virtual float perimeter() override;
	virtual float area() override;

private:
	Point2D a;
	Point2D b;
	Point2D c;
};