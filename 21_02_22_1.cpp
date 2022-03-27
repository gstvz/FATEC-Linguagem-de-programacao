/*
Ler um vetor de 50 inteiros.
Ordenar com o Metodo da Bolha.
Ler um valor inteiro.
Verificar se o valor existe ou nao no vetor com a Busca Sequencial.
Contar a quantidade de verificacoes.
Exibir a quantidade de verificacoes realizadas.
*/

#include <stdio.h>

main()
{ int vet[50], i, j, n, aux, qtd = 0, achou = 0;

  // Leitura do vetor;
  for(i = 0; i < 50; i++)
  { printf("Vetor [%d]", i);
    scanf("%d", &vet[i]);
  }

  // Ordenacao;
  for(j = 49; j > 0; j--)
    for(i = 0; i < j; i++)
      if(vet[i] > vet[i + 1])
      { aux = vet[i];
        vet[i] = vet[i + 1];
        vet[i + 1] = aux;
      }
  
  // Ler o valor n;
  printf("\n\nDigite um valor: ");
  scanf("%d", &n);

  // Verificar se o valor n esta no vetor;
  i = 0;
  while((vet[i] <= n) && (i < 50))
  { if(vet[i] == n)
      achou = 1;
    qtd++;
    i++
  }

  // Exibicao;
  if(achou)
    printf("\n\nO valor %d foi localizado no vetor!", n);
  printf("\n\nForam necessarias %d verificacoes!", qtd);
}