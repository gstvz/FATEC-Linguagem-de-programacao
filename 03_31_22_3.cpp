/*
Receba um vetor de 10 posições de inteiros e retorne a soma dos números pares.
*/

#include <stdio.h>

void leitura_vetor(int vet[10])
{ int i;  
  
  for(i = 0; i < 10; i++)
  { printf("Vetor[%d]: ", i);
    scanf("%d", &vet[i]);
  }

  return;
}

int soma_pares(int vet[10])
{ int i, total = 0;

  for(i = 0; i < 10; i++)
  { if(vet[i] % 2 == 0)
      total = total + vet[i];
  }

  return total;
}

main()
{ int vet[10], soma;

  printf("Leitura do Vetor\n");
  leitura_vetor(vet);

  soma = soma_pares(vet);
  printf("\nA soma dos numeros pares do vetor e: %d\n", soma);
}