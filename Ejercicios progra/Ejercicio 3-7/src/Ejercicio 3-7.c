/*
Ledesma Inti
Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2 los valores solicitados al usuario,
valide los mismos entre 10 y 100, asigne a la variable operacion el valor solicitado al usuario,
valide el mismo 's'-sumar, 'r'-restar, realice la operación de dichos valores a través de una función.
Mostrar el resultado por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

int IngresoNumeroDiezCien();
char SeleccionOperacion();
int MiniCalculadora(int, int, char);

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	char operacion;
	int resultado;

	num1=IngresoNumeroDiezCien();
	num2=IngresoNumeroDiezCien();
	operacion=SeleccionOperacion();

	resultado=MiniCalculadora(num1,num2,operacion);

	printf("%d",resultado);

	return EXIT_SUCCESS;
}

int IngresoNumeroDiezCien()
{
	int num;

	printf("Por favor, ingrese un número entero entre 10 y 100: ");
	scanf("%d",&num);

	while(num<10 || num>100)
	{
		printf("\nEl número ingresado no se encuentra en el rango solicitado\n");
		printf("Inténtelo nuevamente: ");
		scanf("%d",&num);
	}

	return num;
}

char SeleccionOperacion()
{
	char operacion;

	printf("¿Qué operación desea realizar? s(suma) o r(resta): ");
	fflush(stdin);
	scanf("%c",&operacion);

	while(operacion!='s' && operacion!='r')
	{
		printf("\nNinguna de las opciones fue seleccionada, inténtelo nuevamente\n");
		printf("s(suma) r(resta): ");
		fflush(stdin);
		scanf("%c",&operacion);
	}
	return operacion;
}

int MiniCalculadora(int num1, int num2, char operacion)
{
	int resultado;

	switch(operacion)
	{
		case 's':
			resultado=num1+num2;
			printf("\nUsted seleccionó suma:\n");
			printf("%d + %d = ",num1,num2);
			break;
		case 'r':
			resultado=num1-num2;
			printf("\nUsted seleccionó resta:\n");
			printf("%d - %d = ",num1,num2);
			break;
	}

	return resultado;
}

