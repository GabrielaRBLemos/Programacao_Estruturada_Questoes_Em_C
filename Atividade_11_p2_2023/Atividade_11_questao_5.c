#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[51], character;
    int length, i, consonantCount;
    consonantCount = 0;
    printf("Digite uma frase, até 50 caracteres: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    length = strlen(input);

    for (i = 0; i < length; i++) {
        character = tolower(input[i]);

        if (isalpha(character) && character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u') {
            consonantCount++;
        }
    }

    printf("Quantidade de caracteres na frase que não são vogais: %d\n", consonantCount);

    return 0;
}
