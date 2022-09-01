/*
Ledesma Inti
Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo: 9”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

    int num1;
    int num2;
    int num3;

    printf("Ingrese el primer número: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo número: ");
    scanf("%d",&num2);
    printf("Ingrese el tercer número: ");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("El mayor de los números es el primero: %d",num1);
    }
    else
    {
        if(num2 > num3)
        {
            printf("El mayor de los números es el segundo: %d",num2);
        }
        else
        {
            printf("El mayor de los números es el tercero: %d",num3);
        }
    }

    return 0;
}
