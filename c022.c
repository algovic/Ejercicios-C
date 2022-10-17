#include<stdio.h>

int potencia(int base, int exponente)
{
	int temporal = 1;
	int i = 1;

	while( i< exponente)
		{
			temporal *= base;
			i++;
			return temporal;
		}
	return 0;

/*	for(i=1; i<=exponente; i++)
		temporal *= base;
	return temporal;*/
}

int main()

{
	int num1, num2;

	printf("Introduzca la base: \n");
	scanf("%d" , &num1);
	printf("Introduzca el exponente: \n");
	scanf("%d", &num2);
	printf("%d elevado a %d vale %d\n", num1, num2, potencia(num1, num2));

	return 0;

}
