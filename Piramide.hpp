#ifndef PIRAMIDE_HPP
#define PIRAMIDE_HPP
#include "Triangulo.hpp"

class Piramide{
	private:
		Triangulo t;
		double h;
	public:
		Piramide();
		Piramide(Triangulo x, double y);
		void setT(Triangulo x);
		Triangulo getT();
		void setH(double x);
		double getH();
		double getVolumen();
};
#endif
