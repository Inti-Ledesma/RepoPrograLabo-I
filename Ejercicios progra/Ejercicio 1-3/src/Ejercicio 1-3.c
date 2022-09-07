/*
Ledesma Inti
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
En caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int num3;
	int numMedio = 0;

	printf("Ingrese el primer número : ");
	scanf("%d",&num1);
	printf("Ingrese el segundo número : ");
	scanf("%d",&num2);
	printf("Ingrese el tercer número : ");
	scanf("%d",&num3);

	if((num1>num2 && num1<num3)||(num1<num2 && num1>num3))
	{
		numMedio = num1;
	}
	else
	{
		if((num2>num1 && num2<num3)||(num2<num1 && num2>num3))
		{
            numMedio = num2;
		}
		else
		{
			if((num3>num1 && num3<num2)||(num3<num1 && num3>num2))
			{
                numMedio = num3;
			}
		}
	}

    if(numMedio != 0)
    {
        printf("\n%d %d %d el %d es del medio", num1, num2, num3, numMedio);
    }
    else
    {
        printf("\n%d %d %d no hay número del medio", num1, num2, num3);
    }

	return EXIT_SUCCESS;
}
