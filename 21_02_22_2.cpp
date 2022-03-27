/*
Inicializar um vetor 10 inteiros, a partir do 1.
Ler um valor entre 1 e 100 (inclusivo).
Buscar o valor no vetor com a Busca Binaria.
Contar a quantidade de verificacoes.
Exibir a quantidade de verificacoes realizadas.
*/

#include <stdio.h>

main()
{ int vet[100], i, n, qtd = 0, inicio, meio, fim, achou;

  // Inicializar o vetor;
  for(i = 0; i < 100; i++)
    vet[i] = i + 1;

  // Ler o valor n;
  do 
  { printf("Digite um valor entre 1 e 100: ");
    scanf("%d", &n);    
  } while((n < 1) || (n > 100));

  // Busca Binaria;
  achou = 0;
  inicio = 0;
  fim = 99;
  meio = (inicio + fim) / 2;

  while((!achou) && (inicio <= fim))
  { if(vet[meio] == n)
      achou = 1;
    else if(n < vet[meio])
        fim = meio - 1;
      else inicio = meio + 1;
    meio = (inicio + fim) / 2;
    qtd++;
  }

  // Exibicao;
  printf("O valor %d foi localizado com %d tentativas!", n, qtd);
}