#include<stdio.h>

int main(){

int mes,anno;

printf("ingrese un numero del 1 al 12: ");
scanf("%d",&mes);


printf("\ningrese un ano: ");
scanf("%d",&anno);

int febrero=28;
if ( anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0 ){
 febrero=29;
}


switch(mes){
case 1:
printf("Enero");
printf("este mes tiene 31 dias");
break;

case 2:
printf("Febrero");
printf("este mes tiene ",febrero);
break;


case 3:
printf("Marzo");
printf("este mes tiene 31 dias");
break;


case 4:
printf("abril");
printf("este mes tiene 30 dias");
break;

case 5:
	
	printf("Mayo");
	printf("este mes tiene 31 dias");
	break;

case 6:
printf("Junio");
printf("este mes tiene 30 dias");
break;

case 7:
printf("Julio");
printf("este mes tiene 31 dias");
break;

case 8:
printf("Agosto");
printf("este mes tiene 31 dias");
break;

case 9:
printf("Septiembre");
printf("este mes tiene 30 dias");
break;

case 10 :
printf("Octubre");
printf("este mes tiene 31 dias");
break;

case 11 :
printf("Noviembre");
printf("este mes tiene 30 dias");
break;

case 12:
printf("Diciembre");
printf("este mes tiene 31 dias");
break;

default:
	printf("error");


}


return 0;
}
