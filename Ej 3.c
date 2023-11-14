#include <stdio.h>

int main() {
	int matriz[5][5], i, j, mayor=0;
	for(i=0;i<5;i++){
		printf("Empleado %d: \n", i+1);
		for(j=0;j<5;j++){
			printf("Ingrese la venta del dia %d: ", j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]>mayor){
				mayor=matriz[i][j];
			}
		}	
	}
	printf("mayor venta realizada: %d", mayor);
	return 0;
}

