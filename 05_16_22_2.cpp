/*
Escreva uma funcao recursiva que calcule o valor da seguinte serie:
S = 2 + 5/2 + 10/3 + ... + 1 + n^2 / n;
*/

#include <stdio.h>

float calcula_s(int n)
{	if(n == 1)
		return 1;
	else return (float) (1 + n * n)/n + calcula_s(n - 1);
}

main()
{	int num;
	
	do 
	{	printf("Numero: ");
		scanf("%d", &num);		
	}	while(num < 1);
	
	printf("Serie S = %.2f", calcula_s(num));
	
}
