#include <iostream>
#include "Triangulo.hpp"
#include "Circulo.hpp"

using namespace std;

double a, b, c, r;
int numTriangular(int m){
	int t=0;
	for(int i=1;i<=m;i++){
		if((t + i)<=m)
			t+=i;	
	}
	return t;
}

void mostrarOpciones(){
	cout << "*************** Menu ***************" << endl;
	cout << "1. Identificar número triangular previo" << endl;
	cout << "2. Calcular área de triángulo" << endl;
	cout << "3. Calcular área de circulo" << endl;
	cout << "4. Calcular volumen de pirámide" << endl;
	cout << "5. Calcular volumen de esfera" << endl;
	cout << "0. Salir" << endl;
}

void opciones(int opcion){
	switch(opcion){
	
		case 1:{
			       int m;
			       cout << "Ingrese un numero m: ";
			       cin >> m;
			       cout << "El numero triangular previo es: " << numTriangular(m) << endl;

			       break;
		       }

		case 2:{
			       Triangulo t(a,b,c);
			       cout << "El area del triangulo es: " << t.getArea() << endl;
			       break;
		       }

		case 3:{
			       Circulo cir(r);
			       cout << "El area del circulo es: " << cir.getArea() << endl;
			       break;
		       }

		case 4:{
                               break;
                       }

		case 5:{
                               break;
                       }

		case 0:{
			       break;
		       }

		default:{
				cout << "La opcion ingresada no es valida" << endl;
				break;
			}
	}
	cout << endl;
}

int main(){
	int opcion=1;
	cout << "Ingrese el primer lado del triangulo: ";
        cin >> a;
        cout << "Ingrese el segundo lado del triangulo: ";
        cin >> b;
        cout << "Ingrese el tercer lado del triangulo: ";
        cin >> c;
	cout << "Ingrese el radio del circulo: ";
	cin >> r;
	while(opcion != 0){
		mostrarOpciones();
		cin >> opcion;
		opciones(opcion);
	}
	cout << "Fin del programa" << endl;
	return 0;
}
