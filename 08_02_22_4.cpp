/*
Ler 10 numeros inteiros.
Exibir o maior valor.
Exibir o menor valor.
*/

#include <stdio.h>

main()
{ int n, i, maior, menor;

  printf("Digite um numero: ");
  scanf("%d", &n);
  maior = menor =n;

  for(i = 1; i < 10; i++)
  { printf("Digite um numero: ");
    scanf("%d", &n);
    
    if(n > maior)
      maior = n;
    if(n < menor)
      menor = n;
  }

  printf("\n\nMaior valor = %d", maior);
  printf("\n\nMenor valor = %d", menor);
}