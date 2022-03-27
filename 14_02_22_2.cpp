/*
Ler um vetor de 10 posicoes.
Gerar um segundo vetor multiplicando cada elemento por seu indice.
Exibir os vetores.
*/

#include <stdio.h>

main()
{ int vet1[10], vet2[10], i;

  // Leitura;
  for(i = 0; i < 10; i++)
  { printf("Vetor[%d]: ", i);
    scanf("%d", &vet1[i]);
  }

  // Gerar o segundo vetor;
  for(i = 0; i < 10; i++)
    vet2[i] = vet1[i] * i;
  
  // Exibicao;
  printf("\nVetor 1: ");
  for(i = 0; i < 10; i++);
    printf("\t%d", vet1[i]);
  
  printf("\n\nVetor 2: ")
  for(i = 0; i < 10; i++)
    printf("\t%d", vet2[i]);
}