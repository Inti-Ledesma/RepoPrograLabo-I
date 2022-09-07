/*
Ledesma Inti
Ejercicio 2-4:
Ingresar 8 números enteros, distintos de cero. Mostrar:
A. El menor número ingresado.
B. De los pares el mayor número ingresado.
C. Producto de los negativos.
D. En qué lugar fue ingresado el mayor numero
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numIng;
	int menorNumIng;
	int mayorNumParIng;
	int flagB;
	int productoNegs;
	int mayorNumIng;
	int flagD;
	int posMayorNumIng;

	flagB=0;
	productoNegs=1;
	flagD=0;

	for(int i=0;i<8;i++)
	{
		printf("Ingrese un número entero: ");
		scanf("%d",&numIng);

		//Punto A
		if(numIng<menorNumIng || i==0)
		{
			menorNumIng = numIng;
		}

		//Punto B
		if(!(numIng%2)&&numIng)
		{
			if(numIng>mayorNumParIng || flagB==0)
			{
				mayorNumParIng = numIng;
				flagB=1;
			}
		}

		//Punto C
		if(numIng<0)
		{
			productoNegs*=numIng;
		}

		//Punto D
		if(numIng>mayorNumIng || flagD==0)
		{
			mayorNumIng=numIng;
			posMayorNumIng=i;
			flagD=1;
		}
	}

	printf("El menor número ingresado es: %d\n",menorNumIng);
	printf("El mayor número par ingresado es: %d\n",mayorNumParIng);
	printf("El producto de los negativos es: %d\n",productoNegs);
	printf("La posición del mayor número ingresado es: %d\n",posMayorNumIng);

	return EXIT_SUCCESS;
}
