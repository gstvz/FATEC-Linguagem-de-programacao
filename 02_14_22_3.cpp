/*
Ler um vetor de 10 inteiros.
Gerar um segundo vetor com a ordem inversa.
Exibir os vetores.
*/

#include <stdio.h>

main()
{ int vet1[10], vet2[10], i, j = 9;

  // Leitura;
  for(i = 0; i < 10; i++)
  { printf("Vetor[%d]: ", i);
    scanf("%d", &vet1[i]);
  }

  // Gerar segundo vetor;
  for(i = 0; i < 10; i++)
  { vet2[i] = vet1[j];
    j--;
  }

  // Exibicao;
  printf("\nVetor 1: ");
  for(i = 0; i < 10; i++)
    printf("\t%d", vet1[i]);

  printf("\n\nVetor 2: ");
  for(j = 0; j < 10; j++)
    printf("\t%d", vet2[j]);
}

/* Apenas com i de indice:
for(i = 0; i < 10; i++)
  vet2[i] = vet1[9 - i]