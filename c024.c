#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n1;			/*Primer numero, estatico*/
	float *n2, *suma; 	/*Los otros dos numeros*/

	n1 = 5.0;		/*Damos un valor prefijado a n1 (real)*/
	n2 = (float *) malloc (sizeof(float)); /*Reservamos espacio para suma*/
	*n2 = 6.7;		/*Valor prefijado para n2 (puntero a real) */

	suma = (float *) malloc (sizeof(float)); /*Reservamos espacio para suma*/
	*suma = n1 + *n2;	/*Calculamos la suma*/

	printf("El valor prefijado para la suma era %4.2f\n", *suma);
	printf("Ahora es tu turno: Introduce el primer numero ");
	scanf("%f", &n1);	/*Leemos valor para n1 (real) */

	printf("Introduce el segundo numero ");
	scanf("%f", n2);	/*Valor para n2 (puntero a real) */
	*suma = n1+ *n2;	/*Caculamos nuevamente la suma*/
	printf("Ahora la suma es %4.2f\n", *suma);

	free(n2);		/*Liberamos la memoria reservada*/
	free(suma);
}
