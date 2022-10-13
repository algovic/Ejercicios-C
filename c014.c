#include<stdio.h>

int main (void)

{
	int numero[5] = 		/*Un array de 5 numero enteros*/
	{200, 150, 100, -50, 300};
	int suma;				/*Un entero que sera la suma*/

	suma = numero [0] +		/*Y hallamos la suma*/
		numero[1] + numero[2] + numero[3] + numero[4];
	printf("Su suma es %d\n", suma);
	/*Esta suma es menos engorrosa pero todavia no esta bien pulido.*/
}

