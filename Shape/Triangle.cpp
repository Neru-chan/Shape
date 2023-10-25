#include "Triangle.h"

Triangle::Triangle(const Point2D& a, const Point2D& b, const Point2D& c) :
	a(a),
	b(b),
	c(c) {}

Triangle::~Triangle()
{

}

float Triangle::perimeter()
{
	return a.distance(b) + b.distance(c) + a.distance(c);
}

float Triangle::area()
{
	//semi perimeter
	float s = perimeter() / 2;
	float a = this->a.distance(this->b);
	float b = this->b.distance(this->c);
	float c = this->a.distance(this->c);

	return sqrt(s * (s-a) * (s-b) * (s-c));
}
