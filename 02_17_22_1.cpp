/*
Ler um vetor de 10 inteiros.
Ordenar de forma crescente.
Exibir o vetor ordenado.
*/

#include <stdio.h>

main()
{ int vet[10], i, j, aux;

  // Leitura do vetor;
  for(i = 0; i < 10; i++)
  { printf("Vetor [%d]: ", i);
    scanf("%d", &vet[i]);
  }

  // Ordenacao com o metodo da bolha;
  for(j = 9; j > 0; j--)
    for(i = 0; i < j; i++)
      if(vet[i] > vet[i + 1])
      { aux = vet[i];
        vet[i] = vet[i + 1];
        vet[i + 1] = aux;
      }
  
  // Exibicao;
  printf("\n\nVetor Ordenado: ");
  for(i = 0; i < 10; i++)
    printf("\t%d ", vet[i]);
}