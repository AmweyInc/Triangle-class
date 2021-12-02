#include "Pair.h"

Pair::Pair() {

	std::cout << "Enter you first number: ";
	std::cin >> t1;
	std::cout << "Enter you second number: ";
	std::cin >> t2;

	set(t1, t2);
}

void Pair::set(double t1, double t2) {
	this->t1 = t1;
	this->t2 = t2;
}

void Pair::multiplication(double t1, double t2)
{
	std::cout << this->t1 << "x" << this->t2 << "=" << this->t1 * this->t2 << std::endl;
}
