#include<stdio.h>

int main(){

int signos, dia, mes;

		printf("ingrese el dia: ");
		scanf("%d",&dia);

		printf("ingrese el mes: ");
		scanf("%d",&mes);

switch(mes){
	case 3: 
		if(dia>=21){
			printf("usted es aries");
			break;
		}
		else{
			printf("usted es piscis");
			break;
	}
	case 4:
		if(dia>=21){
			printf("usted es Tauro");
			break;
		}
		else{
			printf("usted es aries");
			break;
		}
	case 5:
		if(dia>=21){
			printf("usted es geminis");
			break;
		}
		else{
			printf("usted es Tauro");
			break;
		}
	case 6:
		if(dia>=22){
			printf("usted es cancer");
			break;
		}
		else{
			printf("usted es geminis");
			break;
		}
	case 7:
		if(dia>=23){
			printf("usted es leo");
			break;
		}
		else{
			printf("usted es cancer");
			break;
		}
	case 8:
		if(dia>=24){
			printf("usted es Virgo");
			break;
		}
		else{
			printf("usted es leo");
			break;
		}
	case 9:
		if(dia>=23){
			printf("usted es libra");
			break;
		}
		else{
			printf("usted es virgo");
			break;
		}
	case 10:
		if(dia>=23){
			printf("usted es escorpio");
			break;
		}
		else{
			printf("usted es libra");
			break;
		}
	case 11:
		if(dia>=23){
			printf("usted es sagitario");
			break;
		}
		else{
			printf("usted es escorpio");
			break;
		}
	case 12:
		if(dia>=22){
			printf("usted es capricornio");
			break;
		}
		else{
			printf("usted es sagitario");
			break;
			}
	case 1:
		if(dia>=21){
			printf("usted es Acuario");
			break;
		}
		else{
			printf("usted es capricornio");
			break;
			}
	case 2:
		if(dia>=20){
			printf("usted es Piscis");
			break;
		}
		else{
			printf("usted es Acuario");
			break;
		}
}



return 0;
}
