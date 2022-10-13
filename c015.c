#include<stdio.h>

int main (void)
{
	char texto[40];	/*Para guardar hasta 39 letras*/

	printf("Introduce tu nombre: \n");
	scanf("%s",&texto);
	printf("Hola, %s\n", texto);
}
