#include <iostream>

using namespace std;

int numTriangular(int m){
	int t=0;
	for(int i=1;i<m;i++){
		//cout<<i<<endl;
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
			       break;
		       }

		case 3:{
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
	while(opcion != 0){
		mostrarOpciones();
		cin >> opcion;
		opciones(opcion);
	}
	cout << "Fin del programa" << endl;
	return 0;
}
