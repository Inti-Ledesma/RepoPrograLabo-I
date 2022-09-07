/*
Ledesma Inti
Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el resultado.
Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

    int num1;
    int num2;
    int resultado;

    do{
        printf("Ingrese el primer número: ");
        scanf("%d",&num1);
        printf("Ingrese el segundo número: ");
        scanf("%d",&num2);
    }while((num1<-50 || num1 >100)||(num2<-50 || num2>100));

    resultado = num1 + num2;

    printf("La suma entre %d y %d da como resultado %d",num1,num2,resultado);

    return 0;
}

