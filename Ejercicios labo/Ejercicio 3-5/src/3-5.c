/*
 ============================================================================
 Name        : 3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 3-5: Realizar un programa en donde
 se puedan utilizar los prototipos de la función Restar en sus 4 combinaciones.
 .int Restar1(int, int);
 .int Restar2(void);
 .void Restar3(int, int);
 .void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Restar1(int, int);
int Restar2(void);
void Restar3(int, int);
void Restar4(void);

int main()
{
	setbuf(stdout,NULL);

	char eleccion;
	int resultado;
	int num1;
	int num2;

	printf("Seleccione una función de resta:\n"
			"a. Resta1\n"
			"b. Resta2\n"
			"c. Resta3\n"
			"d. Resta4\n");
	fflush(stdin);
	scanf("%c",&eleccion);

	switch(eleccion)
	{
		case 'a':
			printf("\nSeleccionó la opción a (Resta1)\n");
			printf("Ingrese el primer número: ");
			scanf("%d",&num1);

			printf("Ingrese el segundo número: ");
			scanf("%d",&num2);

			resultado = Restar1(num1,num2);

			printf("El resultado es: %d",resultado);
			break;
		case 'b':
			printf("\nSeleccionó la opción b (Resta2)\n");

			resultado = Restar2();

			printf("El resultado es: %d",resultado);
			break;
		case 'c':
			printf("\nSeleccionó la opción c (Resta3)\n");
			printf("Ingrese el primer número: ");
			scanf("%d",&num1);

			printf("Ingrese el segundo número: ");
			scanf("%d",&num2);

			Restar3(num1,num2);
			break;
		case 'd':
			printf("\nSeleccionó la opción d (Resta4)\n");

			Restar4();
			break;
	}

	return 0;
}

int Restar1(int a, int b)
{
	int resultado;
	resultado = a - b;
	return resultado;
}

int Restar2(void)
{
	int resultado;
	int num1;
	int num2;

	printf("Ingrese el primer número: ");
	scanf("%d",&num1);

	printf("Ingrese el segundo número: ");
	scanf("%d",&num2);

	resultado = num1 - num2;
	return resultado;
}

void Restar3(int a, int b)
{
	int resultado;
	resultado = a - b;
	printf("El resultado es: %d",resultado);
}

void Restar4(void)
{
	int resultado;
	int num1;
	int num2;

	printf("Ingrese el primer número: ");
	scanf("%d",&num1);

	printf("Ingrese el segundo número: ");
	scanf("%d",&num2);
	resultado = num1 - num2;
	printf("El resultado es: %d",resultado);
}
