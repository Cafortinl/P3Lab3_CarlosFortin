//#pragma once
#ifndef CIRCULO_HPP
#define CIRCULO_HPP

class Circulo{
	private:
		double r, d, c;
		float pi = 3.14159265359;
		void calcDiam();
		void calcCircum();
	public:
		Circulo();
		Circulo(int x);
		void setR(double x);
		double getR();
		void setD(double x);
		double getD();
		void setC(double x);
		double getC();
		double getArea();
};
#endif
