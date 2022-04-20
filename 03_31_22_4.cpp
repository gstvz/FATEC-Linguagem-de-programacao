/*
Receba um vetor de 10 posições de inteiros e retorne ordenado em ordem crescente.
*/

#include <stdio.h>

void leitura_vetor(int vet[10])
{ int i;

  for(i = 0; i < 10; i++)
  { printf("Vetor [%d]: ", i);
    scanf("%d", &vet[i]);
  }

  return;
}

void ordenar_vetor(int vet[10])
{ int i, j, aux;

  for(j = 9; j > 0; j--)
    for(i = 0; i < j; i++)
        if(vet[i] > vet[i + 1])
          { aux = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = aux;
          }
  
  return;
}

void exibir_vetor(int vet[10])
{ int i;
  for(i = 0; i < 10; i++)
    printf("%d, ", vet[i]);

  return;
}

main()
{ int vet[10], i;

  printf("\nLeitura do Vetor\n");
  leitura_vetor(vet);

  printf("\nO vetor ordenado em ordem crescente\n");
  ordenar_vetor(vet);
  
  printf("Vetor: ");
  exibir_vetor(vet);
}