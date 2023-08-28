//13. Faça um programa que leia um número inteiro e exiba a soma dos seus dígitos elevados ao cubo utilizando o while.

#include <stdio.h>

int main()
{
   int num, i, sum, remainder;
   sum = 0;
   printf("Insira um número inteiro:\n");
   scanf("%d", &num);
   i = num;
   while (i != 0)
   {
      remainder = i % 10;
      sum = sum + remainder * remainder * remainder;
      i = i / 10;
   }
   printf("A soma dos dígitos do número %d elevados ao cubo é %d\n", num, sum);

   return 0;
}