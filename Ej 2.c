#include <stdio.h>

int main() {
	int matriz[7][20], i, j, vector[20], cont=0;
	for(i=0;i<20;i++){
		printf("N° Legajo: %d \n", i+1);
		for(j=0;j<7;j++){
			printf("ingrese los kilometros recorridos del dia %d: ", j+1);
			scanf("%d", &matriz[i][j]);
			cont=cont+matriz[i][j];
		}
		vector[i]=cont;
		cont=0;
	}
	printf("N° \tDia1 \tDia2 \tDia3 \tDia4 \tDia5 \tDia6 \tDia7 \tTotal \n");
	for(i=0;i<20;i++){
		printf("%d \t", i+1);
		for(j=0;j<7;j++){
			printf("%d \t", matriz[i][j]);
		}
		printf("%d \n", vector[i]);
	}
	return 0;
}

