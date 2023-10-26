#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[101], character;
    int i, length, letters, digits, symbols;

    letters = 0;
    digits = 0;
    symbols = 0;

    printf("Digite uma frase, até 100 caracteres: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    length = strlen(input);

    for (i = 0; i < length; i++) {
        character = input[i];

        if (isalpha(character)) {
            letters++;
        } else if (isdigit(character)) {
            digits++;
        } else {
            symbols++;
        }
    }

    printf("Letras: %d\n", letters);
    printf("Dígitos: %d\n", digits);
    printf("Símbolos: %d\n", symbols);

    return 0;
}
