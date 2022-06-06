#include<stdio.h>
//exibe invertido chamada recursiva
void exibe(int vet[], int i)
{
	printf(" %d", vet[i]);
	
	if(i==0)
	  return;
	
	else exibe(vet,i-1);
}

//exibe na ordem de leitura
void exibe2(int vet[], int i)
{if(i==0)
printf(" ");
else exibe2(vet,i-1);
printf(" %d", vet[i]);
}
//soma dos n primeiro termos
int soma(int vet[], int i)
{ if(i==0)
  return vet[i];
  else return vet[i]+soma(vet,i-1);
}
int main()
{ int n, vetor[10],i;

printf("Digite um valor de indice: ");
scanf("%d", &n);

for(i=0;i<n;i++)
{
printf("Digite o valor do vetor[%d]: ", i);
scanf("%d", &vetor[i]);
}
printf("\n");
exibe(vetor,n-1);
printf("\n");
exibe2(vetor,n-1);
printf("\n");
printf("Soma dos %d primeiros: %d ", n, soma(vetor,n));	
}
