//escrever funcao recursiva que calcule o valor da seguinte serie S.
//s=1-1/2+1/3-1/4+.....

#include <stdio.h>

float serie(int n)
{
if(n==1)
   return 1;
else if(n%2==0)
  return (float)-1/n+serie(n-1);
else return (float)1/n+serie(n-1);	
}

int main()
{
	int num;
printf("Digite um valor: ");
scanf("%d", &num);

printf("Serial: %.2f", serie(num));
}
