#include<stdio.h>

int main() {

char calificacion;

	printf("ingrese una letra de su nota: ");
	scanf("%d",&calificacion);
	calificacion = getchar();
	
switch(calificacion){

	case 'a':
	case 'A':
		printf("su nota es una Excelente");
		break;


	case 'b':
	case 'B':
		printf("su nota es una Buena");
		break;

	case 'c':
	case 'C':
		printf("su nota es una Regular");
		break;

	case 'd':
	case 'D':
		printf("su nota es una Suficiente");
		break;

	case 'f':
	case 'F':
		printf("su nota es una No Suficiente");
		break;
	
	default:
		printf("error");

	}








return 0;
}
