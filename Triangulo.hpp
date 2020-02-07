//#pragma once
#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo{
	private:
		double l1,l2,l3,h;
		double Heron();
	public:
		Triangulo();
		Triangulo(double a, double b, double c);
		void setL1(double l);
		double getL1();
		void setL2(double l);
		double getL2();
		void setL3(double l);
		double getL3();
		void setAltura(double ht);
		double getAltura();
		double getArea();
};
#endif
