/*
Receba um numero inteiro e retorne 1 se for par ou 0 se for impar. 
*/

#include <stdio.h>

int checar_par_impar(int a)
{	if(a % 2 == 0)
		return 1;
	else return 0;	
}

main()
{ int n, tipo_numero;

	printf("\nInsira um numero inteiro: ");
	scanf("%d", &n);
	
	tipo_numero = checar_par_impar(n);
	
	if(tipo_numero == 0)
		printf("\n\nO numero %d e impar!", n);
	else printf("\n\nO numero %d e par!", n);	
}
