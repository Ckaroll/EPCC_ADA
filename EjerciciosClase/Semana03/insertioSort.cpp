#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {31,41,59,26,41,58};
	int i,pos,aux;
	
	for(i=0;i<6;i++){
		pos = i; 
		aux = numeros[i];
		
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	cout<<"Ordenando: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
