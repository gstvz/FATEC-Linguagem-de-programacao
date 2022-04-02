/*
Escreva uma funcao que receba como parametros de entrada as dimensoes de um retangulo.
Retorne o valor da area correspondente às dimensoes lidas.
*/

#include <stdio.h>

float areaRetangulo(float b, float h)
{	float area;
	area = b * h;
	return(area);
};

main()
{	float a, b, area;
	
	printf("Digite o valor da base: ");
	scanf("%f", &a);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &b);
	
	area = areaRetangulo(a, b);
	printf("\n\nO valor da area do retangulo com base %.2f e altura %.2f e: %.2f", a, b, area);
};
