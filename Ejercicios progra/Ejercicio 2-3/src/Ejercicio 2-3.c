/*
Ledesma Inti
Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int a;
	int resto;

	printf("Ingrese un número: ");
	scanf("%d",&a);

	resto = a%2;

	if(resto)
	{
		printf("El número %d es impar\n",a);
	}
	else
	{
		printf("El número %d es par\n",a);
	}

	return EXIT_SUCCESS;
}
