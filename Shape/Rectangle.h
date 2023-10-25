#include "Shape.h"

class Rectangle : Shape{
public:
	Rectangle(const Point2D&, const Point2D&);

	// Inherited via Shape
	virtual float perimeter() override;
	virtual float area() override;

private:
	Point2D a;
	Point2D b;
	Point2D c;
	Point2D d;
};