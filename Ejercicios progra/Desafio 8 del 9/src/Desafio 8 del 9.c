/*
Ledesma Inti

Desafío: Menú-Funciones y Bibliotecas

Realizar un Menú que muestre las opciones:
 a-Iniciar
 b-Procesar
 c-Finalizar
 d-Salir
Nota:
- Antes de salir preguntar si "esta seguro que desea salir?s/n"
- Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar.
- Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar.
- Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar.
*/

#include <stdio.h>
#include <stdlib.h>

char SeleccionarOpcion();
char Confirmar();

int main() {
	setbuf(stdout,NULL);

	char opcion;
	int flagA;
	int flagB;

	flagA=0;
	flagB=0;

	do
	{
		opcion=SeleccionarOpcion();

		switch(opcion)
		{
			//Iniciar
			case 'a':
				printf("\nUsted seleccionó la opción 'Iniciar' satisfactoriamente\n\n");
				flagA=1;
				break;
			//Procesar
			case 'b':
				if(!flagA)
				{
					printf("\nError: Debe Iniciar antes de Procesar\n\n");
				}
				else
				{
					printf("\nUsted seleccionó la opción 'Procesar' exitosamente\n\n");
					flagB=1;
				}
				break;
			//Finalizar
			case 'c':
				if(!flagA)
				{
					printf("\nError: Debe Iniciar antes de Finalizar\n\n");
				}
				else
				{
					if(!flagB)
					{
						printf("\nError: Debe Procesar antes de Finalizar\n\n");
					}
					else
					{
						printf("\nUsted seleccionó la opción 'Finalizar' exitosamente\n\n");
					}
				}
				break;
			//Salir
			case 'd':
				if(Confirmar()=='n')
				{
					printf("\nDe acuerdo, volviendo al menú\n\n");
					opcion='0';
				}

				break;
		}
	}while(opcion!='d');

	printf("\nUsted ha salido exitosamente, gracias por usar la app");

	return EXIT_SUCCESS;
}

char SeleccionarOpcion()
{
	char opcion;

	printf("Seleccione una opción:\n"
			"a-Iniciar\n"
			"b-Procesar\n"
			"c-Finalizar\n"
			"d-Salir\n"
			"Opción: ");
	fflush(stdin);
	scanf("%c",&opcion);

	while(opcion!='a' && opcion!='b' && opcion!='c' && opcion!='d')
	{
		printf("\nError: Ninguna de las opciones fue seleccionada\n\n"
				"Escoja entre:\n"
				"a-Iniciar\n"
				"b-Procesar\n"
				"c-Finalizar\n"
				"d-Salir\n"
				"Opción: ");
		fflush(stdin);
		scanf("%c",&opcion);
	}

	return opcion;
}

char Confirmar()
{
	char confirm;

	printf("\n¿Está seguro que desea salir?\n"
			"s(Si)\n"
			"n(No)\n"
			"Confirmación: ");
	fflush(stdin);
	scanf("%c",&confirm);

	while(confirm!='s' && confirm!='n')
	{
		printf("\nError: Ninguna de las opciones fue seleccionada\n\n"
				"Escoja entre:\n"
				"s(Si)\n"
				"n(No)\n"
				"Confirmación: ");
		fflush(stdin);
		scanf("%c",&confirm);
	}

	return confirm;
}
