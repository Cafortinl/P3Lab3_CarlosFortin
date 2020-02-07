#include "Piramide.hpp"
#include "Triangulo.hpp"

Piramide::Piramide(){
}

Piramide::Piramide(Triangulo x, double y){
	t = x;
	h = y;
}

void Piramide:: setT(Triangulo x){
	t = x;
}

Triangulo Piramide::getT(){
	return t;
}

void Piramide::setH(double x){
	h = x;
}

double Piramide::getH(){
	return h;
}

double Piramide::getVolumen(){
	return (t.getL2() * h)/3;
}
