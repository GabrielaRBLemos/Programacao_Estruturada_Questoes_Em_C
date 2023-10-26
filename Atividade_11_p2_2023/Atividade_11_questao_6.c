#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    char character;
    int count, i;

    count = 0;

    printf("Digite uma frase, até 100 caracteres: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    printf("Digite um caractere para contar: ");
    scanf(" %c", &character);

    for (i = 0; i < strlen(input); i++) {
        if (input[i] == character) {
            count++;
        }
    }

    printf("O caractere '%c' aparece %d vezes na frase.\n", character, count);

    return 0;
}
