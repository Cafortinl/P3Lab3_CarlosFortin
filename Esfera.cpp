#include "Esfera.hpp"
#include "Circulo.hpp"
#include <math.h>

Esfera::Esfera(){
}

Esfera::Esfera(Circulo x){
	c = x;
}

void Esfera::setC(Circulo x){
	c = x;
}

Circulo Esfera::getC(){
	return c;
}
double Esfera::getVolumen(){
	return (4 * (pi * pow(c.getR(),3)))/3;
}

