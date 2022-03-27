/*
Ler 10 numeros inteiros.
Exibir quantos sao pares.
Exibir quantos sao impares.
*/

#include <stdio.h>

main()
{ int n, par = 0, impart = 0, i;
  for(i = 0; i < 10; i++)
  { printf("Digite um numero: ");
    scanf("%d", &n);
    if(n % 2 == 0)
      par++;
    else impar++;
  }

  printf("\n Quantidade de numeros pares: %d", par);
  printf("\n Quantidade de numeros imapres: %d", impar);
}