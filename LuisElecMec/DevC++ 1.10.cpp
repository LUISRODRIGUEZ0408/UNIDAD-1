#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	//Mensaje de bienvenida
	cout<< "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";
	
	//Se declaran los numeros que se sumaran (pueden ser decimales)
	
	//Se pide el primer numero
	cout << "Por favor ingrese el valor de la Base" << "\n";
	//Se asigna el primer valor a Base
	cin >> Base;
	//Se pide el segundo numero
	cout << "Por favor ingrese el valor de la altura" << "\n";
	//Se asigna el segundo valor a Altura
	cin >> Altura;
	
	SUPERFICIE = Base*Altura;
	PERIMETRO=2*(Base+Altura);
	
	//Se muestra el resultado
	printf ("\n La superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es es %5.2f \n", PERIMETRO);
	
	return 0;
	
}