#include <stdio.h>

int main() {
	int emp[5][10], i, j, p=0;
	char nom[5][25];
	for(i=0;i<=4;i++){
		printf("Ingrese nombre del trabajador: ");
		scanf("%s", &nom[i]);
		printf("Ingrese su sueldo por hora: ");
		scanf("%d", &emp[i][6]);
		for(j=0;j<=5;j++){
			printf("Ingrese sus horas trabajadas del dia%d: ", j+1);
			scanf("%d", &emp[i][j]);
			while(emp[i][j]<0 || emp[i][j]>24){
				printf("Ingrese nuevamente las horas trabajadas: ");
				scanf("%d", &emp[i][j]);
			}
			if(j==0){
				if(emp[i][j]>emp[p][j]){
					p=i;
				}
			}
			emp[i][7]+=emp[i][j];
		}
		emp[i][8]=emp[i][6]*emp[i][7];
		emp[0][9]+=emp[i][8];
	}
	printf("N°Legado \t Dia1 \t Dia2 \t Dia3 \t Dia4 \t Dia 5 \t Dia6 \t Sueldo X Hora \t SueldoS \n");
	for(i=0;i<4;i++){
		printf("%d \t\t %d \t %d \t %d \t %d \t %d \t %d \t %d \t\t %d", i+1, emp[i][0], emp[i][1], emp[i][2], emp[i][3], emp[i][4], emp[i][5], emp[i][6], emp[i][8]);
		printf("\n");
	}
	return 0;
}

