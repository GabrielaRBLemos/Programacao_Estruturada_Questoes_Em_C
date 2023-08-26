#include <stdio.h>
#include <stdlib.h>

int main(){
    float gradeA, gradeB, gradeC, mean, numberOfGrades;
    numberOfGrades = 3;
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &gradeA);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &gradeB);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &gradeC);

    mean = (gradeA + gradeB + gradeC)/numberOfGrades;

    if (mean >= 7){
        printf("Aluno foi aprovado com média %.2f\n", mean);
    }
    else{
        printf("Aluno reprovado\n");
    }
    
        
    return 0;
}