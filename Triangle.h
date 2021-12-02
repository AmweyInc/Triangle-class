#pragma once
#include <iostream>
class Triangle
{
public:
	Triangle();

	void set(double t1, double t2, double t3);
	void square_triangle(double t1, double t2);
	void perimeter_triangle(double t1, double t2, double t3);

private:
	uintptr_t t1;
	uintptr_t t2;
	uintptr_t t3_l;
};
