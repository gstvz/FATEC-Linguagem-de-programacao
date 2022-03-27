/*
Ler 10 numeros inteiros.
Exibir quantos sao iguais ao ultimo valor lido.
*/

#include <stdio.h>

main()
{ int vet[10], i, qtd = 0;

  // Leitura do vetor;
  for(i = 0; i < 10; i++)
  { printf("Vetor[%d]: ", i);
    scanf("%d", &vet[i]);
  }

  // Comparacao dos elementos;
  for(i = 0; i < 9; i++)
    if(vet[i] == vet[9])
      qtd++;

  // Exibicao do vetor;
  printf("\n\nVetor lido:");
  for(i = 0; i < 10; i++)
    printf("\t%d", vet[i]);

  // Exibicao da comparacao;
  printf("\n\nQuantidade de elementos iguais ao ultimo valor = %d", qtd);
}