//Dada una secuencia de n números no negativos y mayores que cero.
//El objetivo es encontrar el mayor número que se pueda obtener
//multiplicando dos números de esta secuencia.
// En tiempo lineal
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int numeros[] = {1, 8, 6, 50, 3};
	int mayor, segundo,producto;
	mayor = segundo = numeros[0];

	for (int i = 0; i < 5; ++i)
	{
		if(numeros[i] > mayor){
			 segundo = mayor;
			 mayor = numeros[i];
		 }
		 else if (numeros[i] > segundo){
			 segundo = numeros[i];
		 }
 
	}
	producto=mayor*segundo;
	cout<<"El mayor es y segundo mayor es "<<mayor<<" y "<<segundo<<endl;
	cout<<"la suma de ambos es "<<producto<<endl;
}
