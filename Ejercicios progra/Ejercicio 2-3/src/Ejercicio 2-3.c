/*
Ledesma Inti
Ejercicio 2-3: Usando el concepto de operadores l�gicos booleanos en el condicional.
Solicitar un n�mero al usuario e informar si el n�mero es par o impar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int a;
	int resto;

	printf("Ingrese un n�mero: ");
	scanf("%d",&a);

	resto = a%2;

	if(resto)
	{
		printf("El n�mero %d es impar\n",a);
	}
	else
	{
		printf("El n�mero %d es par\n",a);
	}

	return EXIT_SUCCESS;
}
