#include "Triangulo.hpp"
#include <iostream>
#include <math.h>

Triangulo::Triangulo(){
}

Triangulo::Triangulo(double a, double b, double c){
	l1 = a;
	l2 = b;
	l3 = c;
}

Triangulo::Heron(){
	int s = (l1 + l2 + l3)/2;
	int area =squrt(s * (s - l1) * (s - l2) * (s - l3));
	h = (2 * area)/l2;
}

void Triangulo::setL1(double l){
	l1 = l;
}

double Triangulo::getL1(){
	return l1;
}

void Triangulo::setL2(double l){
        l2 = l;
}

double Triangulo::getL2(){
        return l2;
}

void Triangulo::setL3(double l){
        l3 = l;
}

double Triangulo::getL3(){
        return l3;
}

double Triangulo::getArea(){
	return (l2 * h)/2;
}
