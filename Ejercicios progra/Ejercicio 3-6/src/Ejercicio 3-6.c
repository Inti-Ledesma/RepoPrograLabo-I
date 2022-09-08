/*
Ledesma Inti
Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor solicitado al usuario,
valide el mismo entre 10 y 100, realice un descuento del 5% a dicho valor a través de una función llamada realizarDescuento().
Mostrar el resultado por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

float RealizarDescuento(int);

int main(void) {
	setbuf(stdout,NULL);

	int numero1;
	float valorConDescuento;

	printf("Por favor, ingrese un número entero entre 10 y 100: ");
	scanf("%d",&numero1);

	while(numero1<10 || numero1>100)
	{
		printf("\nEl número ingresado no se encuentra en el rango solicitado\n");
		printf("Inténtelo nuevamente: ");
		scanf("%d",&numero1);
	}

	valorConDescuento=RealizarDescuento(numero1);

	printf("El valor de el número ingresado con descuento es de: $%.2f",valorConDescuento);

	return EXIT_SUCCESS;
}

float RealizarDescuento(int num)
{
	float descuento;
	float valorConDescuento;

	descuento=(float)num*5/100;
	valorConDescuento=num-descuento;

	return valorConDescuento;
}
