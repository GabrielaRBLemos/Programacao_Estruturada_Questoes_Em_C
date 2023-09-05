//Crie um programa que leia 5 notas de alunos e exiba quantos deles foram aprovados (nota maior ou igual a 7).

#include <stdio.h>
int main(){
    float grades[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Insira a nota do aluno %d:\n", i+1);
        scanf("%f", &grades[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (grades[i] >= 7.0)
        {
            printf("Aluno %d foi aprovado.\n", i+1);
        }
        else{
            printf("Aluno %d foi reprovado.\n", i+1);
        }
    }
    return 0;
}