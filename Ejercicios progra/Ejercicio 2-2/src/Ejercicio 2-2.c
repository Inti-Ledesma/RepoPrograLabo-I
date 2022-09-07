/*
Ledesma Inti
Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    setbuf(stdout, NULL);

    int num;
	char validacion;
	int acumuladorPos = 0;
	int acumuladorNeg = 0;
	int cantPos = 0;
	int cantNeg = 0;
	int posMin;
	int negMax;
	float promedioPos;
	float promedioNeg;

	do
	{
	    printf("Ingrese un numero: ");
	    scanf("%d",&num);

	    if(num>0)
	    {
	        if(cantPos==0 || num<posMin)
	        {
	            posMin = num;
	        }
	        cantPos++;
	        acumuladorPos += num;
	    }
	    else
	    {
	        if(num<0)
	        {
    	        if(cantNeg==0 || num>negMax)
    	        {
    	            negMax = num;
    	        }
                cantNeg++;
                acumuladorNeg += num;
	        }
	    }

        printf("¿Desea seguir ingresando numeros? s(Si) n(No) ");
        fflush(stdin);
        scanf("%c",&validacion);
        validacion=tolower(validacion);

        while(validacion != 's' && validacion != 'n')
        {
            printf("\nTiene que ingresar 's' o 'n'\n");
            printf("¿Desea seguir ingresando numeros? s(Si) n(No) ");
            fflush(stdin);
            scanf("%c",&validacion);
            validacion=tolower(validacion);
        }
	}while(validacion!='n');

	promedioPos = (float)acumuladorPos/cantPos;
	promedioNeg = (float)acumuladorNeg/cantNeg;

	if(cantPos == 0)
	{
	    printf("\nNo se ingresaron números positivos.");
	}
	else
	{
	    printf("\nEl promedio de la suma de los positivos es %.2f",promedioPos);
	}

	if(cantNeg == 0)
	{
	    printf("\nNo se ingresaron números negativos.");
	}
	else
	{
	    printf("\nEl promedio de la suma de los negativos es %.2f",promedioNeg);
	}

	return EXIT_SUCCESS;
}
