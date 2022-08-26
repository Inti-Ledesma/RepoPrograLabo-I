/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int resultado;

	do
	{
		printf("Ingrese el primer número: ");
		scanf("%d",&num1);
		printf("Ingrese el segundo número: ");
		scanf("%d",&num2);
	}while((num1<-50 || num1 >100)||(num2<-50 || num2>100));

	resultado = num1 + num2;

	printf("La suma entre %d y %d da como resultado %d",num1,num2,resultado);

	return EXIT_SUCCESS;
}
