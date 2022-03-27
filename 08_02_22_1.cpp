/*
Ler 10 numeros inteiros.
Calcular a media.
*/

#include <stdio.h>

main()
{ int n, i, soma = 0;
  float media;

  for(i = 0; i < 10; i++)
  { printf("\n Digite um numero: ");
    scanf("%d", &n);
    soma = soma + n;
  }

  media = soma / 10.0
  /* ou media = (float) soma/10; */

  printf("\n Media = %.2f", media);
}