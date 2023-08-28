//7. Faça um programa que leia um número inteiro e exiba o número invertido. Por exemplo, se o número lido for 123, o programa deve exibir 321
#include <stdio.h>

int main()
{
    char num[10000];
    printf("Insira um número inteiro:\n");
    fgets(num, 10000, stdin);
    numReversing(num);
    printf("%s\n", num);
}
void numReversing(char *num)
{
    char *end, tmp;

    end = num + strlen(num) - 1;

    for (; end > num; --end, ++num) {
        tmp = *end;
        *end = *num;
        *num = tmp;
    }
}