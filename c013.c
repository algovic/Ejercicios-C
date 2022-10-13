#include <stdio.h>

int main (void)
{
	int numero [5]; /*Un array de 5 numeros enteros*/
	int suma;		/*Un entero que sera la suma*/

	numero [0] = 200; /*Les damos valores*/
	numero [1] = 150;
	numero [2] = 100;
	numero [3] = -50;
	numero [4] = 300;
	suma = numero [0] + /* Y hallamos la suma*/
		numero [1] + numero [2] + numero [3] + numero[4];
	printf("Su suma es %d\n", suma);
	/*Nota, esta es la forma mas ineficiente e incomoda*/
	/*Ya lo iremos mejorando*/
}
