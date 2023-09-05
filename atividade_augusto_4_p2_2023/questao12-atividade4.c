#include <stdio.h>
#include <stdlib.h>

int main(){
    const char *month[12];
    int monthNum;
    month[0] = "Janeiro";
    month[1] = "Fevereiro";
    month[2] = "Março";
    month[3] = "Abril";
    month[4] = "Maio";
    month[5] = "Junho";
    month[6] = "Julho";
    month[7] = "Agosto";
    month[8] = "Setembro";
    month[9] = "Outubro";
    month[10] = "Novembro";
    month[11] = "Decembro";
    printf("Insira o número do mês.\n");
    scanf("%d", &monthNum);
    printf("%s\n", month[monthNum - 1]);
    return 0;
}