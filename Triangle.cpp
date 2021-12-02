#include "Triangle.h"

Triangle::Triangle()
{
	std::cout << "Input hypotenuse: ";
	std::cin >> t3_l;
	std::cout << "Input adjacent leg: ";
	std::cin >> t2;
	std::cout << "Input Opposite leg: ";
	std::cin >> t1;
}
void Triangle::set(double t1, double t2,double t3) {
	this->t1 = t1;
	this->t2 = t2;
	this->t3_l = t3;
}

void Triangle::square_triangle(double t1, double t2)
{
	std::cout << "S = " << (t1 * t2) / 2 << std::endl;
}

void Triangle::perimeter_triangle(double t1, double t2, double t3)
{
	std::cout << "P = " << t1 + t2 + t3 << std::endl;
}
