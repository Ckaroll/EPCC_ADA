Escriba el procedimiento Insertion-Sort para que muestre el
resultado en orden descendente

Una forma fácil de realizarlo sería haciendo el algoritmo normal 

for(i=0;i<N;i++){ <-N=tamaño de la lista
		pos = i; 
		aux = N[i];
		
		while((pos>0) && (numeros[pos-1] > aux))
			numeros[pos] = numeros[pos-1];
			pos--;
		
		numeros[pos] = aux;
	}

y a la hora de mostrarlo, que lo imprima en orden descendente

for(i=N;i>=0;i--) <-N=tamaño de la lista

