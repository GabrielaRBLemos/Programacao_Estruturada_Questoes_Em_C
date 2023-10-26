#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[51];
    int length, vowelCount, i;
    vowelCount = 0;
    printf("Digite uma frase, até 50 caracteres: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    length = strlen(input);

    for (i = 0; i < length; i++) {
        char character = tolower(input[i]);
        
        switch (character) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
            default:
                break;
        }
    }

    printf("Quantidade de vogais na frase: %d\n", vowelCount);

    return 0;
}