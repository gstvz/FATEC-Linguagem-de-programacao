/*
Ler 2 vetores de 5 inteiros.
Ordenar ambos com o metodo da bolha.
Gerar um terceiro vetor com os vetores ordenados intercalando os elementos de um vetor em ordem crescente.
*/

#include <stdio.h>

main()
{ int vet1[5], vet2[5], vet3[10], i, j, aux;

  // Leitura Vetor 1;
  for(i = 0; i < 5; i++)
  { printf("Vetor 1[%d]: ", i);
    scanf("%d", &vet1[i]);
  }

  // Ordenacao Vetor 1;
  for(j = 4; j > 0; j--)
    for(i = 0; i < j; i++)
      if(vet1[i] > vet1[i + 1])
      { aux = vet1[i];
        vet1[i] = vet1[i + 1];
        vet1[i + 1] = aux;
      }
  
  // Leitura Vetor 2;
  for(i = 0; i < 5; i++)
  { printf("Vetor 2[%d]: ", i);
    scanf("%d", &vet2[i]);
  }

  // Ordenacao Vetor 2;
  for(j = 4; j > 0; j--)
    for(i = 0; i < j; i++)
      if(vet2[i] > vet2[i + 1])
      { aux = vet2[i];
        vet2[i] = vet2[i + 1];
        vet2[i + 1] = aux;
      }

  // Gerar Vetor 3;
  for(i = 0; i < 5; i ++)
    vet3[i] = vet1[i];
  j = 0;
  for(i = 5; i < 10; i++)
    { vet3[i] = vet2[j];
      j++;
    }
  
  // Ordenar Vetor 3;
  for(j = 9; j > 0; j--)
    for(i = 0; i < j; i++)
      if(vet3[i] > vet3[i + 1])
      { aux = vet3[i];
        vet3[i] = vet3[i + 1];
        vet3[i + 1] = aux;
      }
  
  // Exibicao;
  printf("\n\nVetor Intercalado: ");
  for(i = 0; i < 10; i++)
    printf("\t%d ", vet3[i]);
}