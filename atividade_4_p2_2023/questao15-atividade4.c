#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isWeekend(char *day) {
    return (strcmp(day, "Sábado") == 0) || (strcmp(day, "Domingo") == 0);
}

int main() {
    char dayOfWeek[20];
    
    printf("Digite o dia da semana:\n ");
    scanf("%s", dayOfWeek);
    
    if (isWeekend(dayOfWeek)) {
        printf("É fim de semana!\n");
    } 
    else {
        printf("É dia de semana.\n");
    }
    
    return 0;
}
