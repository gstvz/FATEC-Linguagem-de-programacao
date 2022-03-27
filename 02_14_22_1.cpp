/*
Ler um vetor de 10 inteiros.
Ler um valor inteiro.
Exibir os elementos do vetor e quantos sao iguais a n.
*/

#include <stdio.h>

main()
{ int vet[10], i, n, qtd = 0;

  // Leitura do vetor;
  for(i = 0; i < 10; i++)
  { printf("Vetor[%d]: ", i);
    scanf("%d", &vet[i]);
  }

  // Leitura do valor n;
  printf("\nDigite um valor: ");
  scanf("%d", &n);

  // Comparacao;
  for(i = 0; i < 10; i++)
    if(vet[i] == n)
      qtd++;

  // Exibicao;
  printf("\n\nVetor: ");
  for(i = 0; i < 10; i++)
    printf("\t%d", vet[i]);
  
  printf("\n\nQuantidade de numeros iguais a n = %d", qtd);
}