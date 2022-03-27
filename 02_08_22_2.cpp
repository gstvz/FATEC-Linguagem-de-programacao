/*
Ler 10 numeros inteiros.
Exibir quantos numeros sao iguais ao primeiro valor lido.
*/

#include <stdio.h>

main()
{ int prim, n, i, qtd = 0;
  
  printf("Digite um numero: ");
  scanf("%d", &prim);

  for(i = 1; i < 10; i++)
  { printf("Digite um numero: ");
    scanf("%d", &n);
    if(n == prim)
      qtd++
  }

  printf("\n\n Quantidade de numeros iguais ao primeiro valor: %d", qtd);
}