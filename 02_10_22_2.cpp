/*
Ler 2 vetores de 10 inteiros.
Gere um terceiro vetor com a soma dos vetores.
Exibir os 3 vetores.
*/

#include <stdio.h>

main()
{ int vet1[10], vet2[10], vetS[10], i;

  for(i = 0; i < 10; i++)
  { printf("\nVetor 1[%d]: ", i);
    scanf("%d", &vet1[i]);
  }

  for(i = 0; i < 10; i++)
  { printf("\nVetor 2[%d]: ", i);
    scanf("%d", &vet2[i]);
  }

  for(i = 0; i < 10; i++)
    vetS[i] = vet1[i] + vet2[i];

  for(i = 0; i < 10; i++)
    printf("\nVetor 1[%d+1]: %d", i, vet1[i]);

  for(i = 0; i < 10; i++)
    printf("\nVetor 2[%d+1]: %d", i, vet2[i]);

  for(i = 0; i < 10; i++)
    printf("\nVetor Soma[%d+1]: %d", i, vetS[i]);
}