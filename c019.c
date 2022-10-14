#include<stdio.h>

int cuadrado (int n)
{
	return n*n;
}

int main(void)
{
	int numero;
	int resultado;

	numero=6;
	resultado = cuadrado(numero);
	printf("El cuadrado del numero es %d", resultado);
	printf(" y el de 3 es %d\n", cuadrado(3));
	return 0;

}
