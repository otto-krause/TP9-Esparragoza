#include <stdio.h>

int main() {
	int matriz[12][19], i, j;
	printf("Ingrese los elementos de la matriz: \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("ij %d%d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]<0){
				matriz[i][j]=0;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}

