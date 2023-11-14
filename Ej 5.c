#include <stdio.h>

int main() {
	int matriz[15][12], i, j, menor=100000000, cont=0, cero=0;
	printf("Ingrese los elementos de la matriz: \n");
	for(i=0;i<15;i++){
		for(j=0;j<12;j++){
			printf("ij %d%d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]<=menor){
				menor=matriz[i][j];
			}
			if(i<=4){
				cont=cont+matriz[i][j];
			}
			if(i>=4 && i<=8){
				if(matriz[i][j]<0){
					cero++;
				}
			}
		}
	}
	printf("El menor elemento del arreglo es: %d \n", menor);
	printf("La suma de los elementos de las 5 primeras filas es: %d \n", cont);
	printf("El total de los elementos negativos de las filas 5 a 9 es: %d \n", cero);
	return 0;
}

