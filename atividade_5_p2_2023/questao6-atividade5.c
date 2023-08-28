//6. Elabore um programa que leia um número inteiro e exiba a soma dos dígitos pares desse número.

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
      if(remainder % 2 == 0)
      {
        sum = sum + remainder;
      }
      i = i / 10;
   }
   printf("A soma dos dígitos do número %d é %d\n", num, sum);

   return 0;
}