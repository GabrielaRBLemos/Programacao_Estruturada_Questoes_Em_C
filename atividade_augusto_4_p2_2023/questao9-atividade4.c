#include <stdio.h>
#include <stdlib.h>

int main(){
    char letter;
    printf("Digite uma letra:\n");
    scanf("%c", &letter);
    switch(letter) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("Vogal\n");
                break;
            default:
                printf("Consoante\n");
    }
return 0;
}