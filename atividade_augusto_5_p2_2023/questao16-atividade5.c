//16. Crie um programa que leia 5 notas de alunos e exiba quantos deles foram aprovados (nota maior ou igual a 7) utilizando o while.
#include <stdio.h>

int main(){
    float grades[5];
    int i;
    i = 0;
    while(i < 5)
    {
        printf("Insira a nota do aluno %d:\n", i+1);
        scanf("%f", &grades[i]);
        i = i + 1;
    }
    i = 0;
    while (i < 5)
    {
        if (grades[i] >= 7.0)
        {
            printf("Aluno %d foi aprovado.\n", i+1);
        }
        else{
            printf("Aluno %d foi reprovado.\n", i+1);
        }
        i = i + 1;
    }

    return 0;
}