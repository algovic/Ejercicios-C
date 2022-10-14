#include<stdio.h>
#include<string.h>

int  main(void)
	{
		char texto[40];

		printf("Introduce una palabra: ");
		scanf("%s", texto);
		printf("Has tecleado %lu letras", strlen(texto));
	}


