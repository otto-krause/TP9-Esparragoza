#include <stdio.h>

int main() {
	int i, j, ventas[4][7]={0}, vps[4]={0}, mayor=-1000000, ps[4]={0}, sem=0;
	printf("Ingrese la cantidad de ventas \n");
	for(i=0;i<4;i++){
		printf("Semana %d \n", i+1);
		for(j=0;j<7;j++){
			printf("Dia %d: ", j+1);
			scanf("%d", &ventas[i][j]);
			vps[i]+=ventas[i][j];
		}
		if(vps[i]>mayor){
			mayor=vps[i];
			sem=i+1;
		}
	}
	printf("Total por semana: \n");
	for(i=0;i<4;i++){
		printf("Semana %d: %d \n", i+1, vps[i]);
		ps[i]=vps[i]/7;
	}
	printf("promedio por semana \n");
	for(i=0;i<4;i++){
		printf("Semana %d promedio: %d \n", i+1, ps[i]);
	}
	printf("La semana con la mayor venta fue la %d \n", sem);
	return 0;
}

