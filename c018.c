#include <stdio.h>
int main()
{
	char nombre[40];
	int n;
	printf("Introduce tu nombre para mostrarlo de forma separada: ");
	gets(nombre);
	n=0;
	while(nombre[n]!=0){
		printf("%c",nombre[n]);
		n++;
		printf(" ");
		}
	printf("\n");
}
