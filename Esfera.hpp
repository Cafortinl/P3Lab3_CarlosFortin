#ifndef ESFERA_HPP
#define ESFERA_HPP
#include "Circulo.hpp"

class Esfera{
	private:
		Circulo c;
		double pi = 3.14159265359;

	public:
		Esfera();
		Esfera(Circulo x);
		void setC(Circulo x);
		Circulo getC();
		double getVolumen();

};
#endif
