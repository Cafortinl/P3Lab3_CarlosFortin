#include "Circulo.hpp"
#include <math.h>

Circulo::Circulo(){
}

Circulo::Circulo(double x){
	r = x;
	d = calcDiam();
	c = calcCircum();
}

double Circulo::calcDiam(){
	double diam;
	diam = 2 * pi;
	return diam;
}

double Circulo::calcCircum(){
	double circ;
	circ = d * r;
	return circ;
}

void Circulo::setR(double x){
	r = x;
}

double Circulo::getR(){
	return r;
}

void Circulo::setD(double x){
        d = x;
}

double Circulo::getD(){
        return d;
}

void Circulo::setC(double x){
        c = x;
}

double Circulo::getC(){
        return c;
}

double Circulo::getArea(){
	return pi * pow(r,2);
}

