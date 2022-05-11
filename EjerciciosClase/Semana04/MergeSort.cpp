#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arreglo,int inicio, int mitad, int final){
    int i,j,k; //inicializando variables
    int elementosIzq = mitad - inicio + 1;
    int elementosDer = final - mitad;

    vector<int>izquierda(elementosIzq);
    vector<int>derecha(elementosDer);

    for(int i = 0; i < elementosIzq; i++){ //asigna los valores del vector a ordenar
        izquierda[i] = arreglo[inicio+i];
    }
    for(int j = 0; j < elementosDer; j++){
        derecha[j] = arreglo[mitad + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while(i < elementosIzq && j < elementosDer){ //mezcla los valores
        if(izquierda[i] <= derecha[j]){			 //de los vectores izq y der
            arreglo[k] = izquierda[i];			 //en el vector que pasamos como referencia la función
            i++;
        }else{
            arreglo[k] = derecha[j];
            j++;
        }
        k++;
    }

    while(j < elementosDer){ //vacia los arreglos izq y der en caso de ser necesario
        arreglo[k] = derecha[j];
        j++;
        k++;
    }

    while(i < elementosIzq){
        arreglo[k] = izquierda[i];
        i++;
        k++;
    }

}

void mergeSort(vector<int>&arreglo,int inicio, int final){
    if(inicio < final){
        int mitad = inicio + (final - inicio)/2; //indica hasta donde se divide el arreglo
        mergeSort(arreglo,inicio,mitad);
        mergeSort(arreglo,mitad+1,final);
        merge(arreglo,inicio,mitad,final);
    }
}

void mostrarArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> A = {19,4,2,89,7,16,1}; //vector
    mostrarArreglo(A);
    mergeSort(A,0,A.size()-1);
    mostrarArreglo(A);
    return 0;
}
