#include<stdio.h>

int main (void)
{
	char texto[40];		
	
	printf("Introduce tu nombre: \n");
	scanf("%s", texto);
	printf("Hola, %s. Tu inicial es %c\n", texto, texto[0]);
}
