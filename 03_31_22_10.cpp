/*
Receba o valor do Capital inicial, a taxa de juros, o tempo de investimento e retone o valor do montante final.
*/

#include <stdio.h>

float calcular_montante(float capital, float taxa, int tempo)
{ float taxaFinal = 1, montante, i;
  float taxaConvertida = (taxa / 100) + 1;  

  for(i = 0; i < tempo; i++)
    taxaFinal = taxaFinal * taxaConvertida;

  montante = capital * taxaFinal;

  return montante;  
}


main()
{ float capital, taxa, montante;
  int tempo;

  printf("\nInforme o capital inicial: ");
  scanf("%f", &capital);

  printf("\nInforme a taxa de juros: ");
  scanf("%f", &taxa);

  printf("\nInforme o tempo em meses: ");
  scanf("%d", &tempo);

  montante = calcular_montante(capital, taxa, tempo);
  printf("\nO montante final e: %.2f\n", montante);
}