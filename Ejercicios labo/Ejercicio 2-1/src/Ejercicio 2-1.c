/*
Ledesma Inti
Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);
    int num;
	int contador = 0;
	int acumulador = 0;
	float promedio;

	while(contador<7)
	{
	    printf("Ingrese un numero negativo distinto de 0: ");
	    scanf("%d",&num);

	    while(num>=0)
	    {
	        printf("El numero ingresado no es un numero negativo\n");
	        printf("\nIngrese un numero negativo distinto de 0: ");
	        scanf("%d",&num);
	    }

	    acumulador += num;

	    contador++;
	}

	promedio = (float)acumulador/7;

	printf("El promedio de la suma de todos los numeros es %.2f",promedio);

	return EXIT_SUCCESS;
}
