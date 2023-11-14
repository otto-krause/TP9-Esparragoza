#include <stdio.h>

void imprimir(int Fila[10], int Columna[10]){
	printf("Vector con filas: \n");
	for(int i=0;i<10;i++){
		printf("%d \t", Fila[i]);
	}
	printf("\n Vector con columnas: \n");
	for(int i=0;i<10;i++){
		printf("%d \t", Columna[i]);
	}
}

int main() {
	int matriz[10][10], i, j, vectorI[10]={0}, vectorJ[10]={0};
	for(i=0;i<10;i++){
		printf("tuki%d \n", i+1);
		for(j=0;j<10;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			vectorI[i]+=matriz[i][j];
			vectorJ[i]+=matriz[j][i];
		}
		
	}
	imprimir(vectorI, vectorJ);
	return 0;
}

