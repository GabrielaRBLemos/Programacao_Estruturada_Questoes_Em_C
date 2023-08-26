#include <stdio.h>
#include <stdlib.h>

int main(){
    const char *weekday[12];
    int weekdayNum;
    weekday[0] = "Domingo";
    weekday[1] = "Segunda";
    weekday[2] = "Terça";
    weekday[3] = "Quarta";
    weekday[4] = "Quinta";
    weekday[5] = "Sexta";
    weekday[6] = "Sábado";
    printf("Insira um número entre 1 e 7.\n");
    scanf("%d", &weekdayNum);
    printf("%s\n", weekday[weekdayNum - 1]);
    return 0;
}