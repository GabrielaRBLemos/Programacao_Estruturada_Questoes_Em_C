#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, counter;
    char sequence[1000];
    printf("Insira uma sequencia de números separados por espaço:");
    scanf("%s", &sequence);
    counter = 1;
    for(i = 0; i < sizeof(sequence); i++){
        if(sequence[i] == ' '){
            counter = counter + 1;
        }
    }
    printf("%d", counter);
    return 0;
}
