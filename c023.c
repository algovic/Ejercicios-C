#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* datos;		/*Necesitamos espacio para varios numeros*/
	int cuantos;	/*Preguntaremos cuantos desea introducir*/
	int i;			/*Para bucles*/
	long suma=0;	/*La suma*/

	do
	{
		printf("Cuantos numeros desea sumar? \n");
		scanf("%d", &cuantos);
		datos = (int *) malloc (cuantos *sizeof(int));
		if (datos == NULL) /*Si no hay espacio, avisamos*/
			printf("No caben tantos datos en memoria.\n");
		}
	while (datos == NULL); /* Si pide demasiado, no le dejamos*/
	
	/*Pedimos y almacenamos los datos*/
	for (i=0; i<cuantos; i++)
	{
		printf("Introduzca el dato numero %d: ", i+1);
		scanf("%d", datos+i);
	}
	/* Calculamos la suma */
	for (i=0; i<cuantos; i++)
		suma += *(datos+i);

	printf("Su suma es %ld\n", suma);
	free(datos);

	return 0;

}

