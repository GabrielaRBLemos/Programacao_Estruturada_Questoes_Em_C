#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[51], letter, uppercaseLetter;
    int i;

    printf("Digite uma frase, até 50 caracteres: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &letter);

        letter = tolower(letter);
    } while (!isalpha(letter));

    uppercaseLetter = toupper(letter);

    for (i = 0; input[i]; i++) {
        if (tolower(input[i]) == letter) {
            input[i] = uppercaseLetter;
        }
    }

    printf("Frase com as ocorrências substituídas: %s\n", input);

    return 0;
}