#include <stdio.h>

int main() {
	int i, j, k, torre[7][20][6]={0}, ht, hpt[7], hpp[7][20], acu;
	float pmt, pmp[7];
	printf("Ingrese la cantidad de habitantes: \n");
	for(i=0;i<7;i++){
		printf("Torre %d \n", i+1);
		for(j=0;j<20;j++){
			printf("Piso %d \n", j+1);
			for(k=0;k<6;k++){
				printf("-Depa %d: ", k+1);
				scanf("%d", &torre[i][j][k]);
				ht+=torre[i][j][k];
				hpt[i]+=torre[i][j][k];
				hpp[i][j]+=torre[i][j][k];
			}
		}
	}
	pmt=ht/7;
	for(i=0;i<7;i++){
		for(j=0;j<20;j++){
			acu+=hpp[i][j];
		}
		pmp[i]=acu/20;
	}
	printf("La cantidad de habitantes del complejo es: %d \n", ht);
	printf("habitantes por torre \n");
	for(i=0;i<7;i++){
		printf("Torre %d: %d \n", i+1, hpt[i]);
	}
	printf("La cantidad de habitantes promedio por torre es: %.1f \n", pmt);
	printf("Cantidad promedio de habitantes por piso: \n");
	for(i=0;i<7;i++){
		printf("torre %d Promedio por pisos: %.1f", i+1, pmp[i]);
	}
	return 0;
}

