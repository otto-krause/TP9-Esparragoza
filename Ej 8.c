#include <stdio.h>

int main() {
	int matriz[5][6], i, j, cont=0, aux=0;
	printf("Ingrese los elementos de la matriz: \n");
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("ij %d%d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]<0){
				cont++;
			}
		}
	}
	for(i=0;i<5;i++){
		if(matriz[i][i]==0){
			aux++;
		}
	}
	printf("la cantidad de elementos negativos es de: %d \n", cont);
	printf("la cantidad de '0' en la diagonal principal es de: %d \n", aux);
	return 0;
}

