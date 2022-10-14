#include<stdio.h>

int	 mayor(int n1, int n2)
{

	if (n1>n2)
		return n1;
	else 
		return n2;

}

int  main ()
{
	int n1;
	int n2;

	n1 = 9;
	n2 = 6;

	printf("El resultado es %d\n", mayor(n1, n2));

}
