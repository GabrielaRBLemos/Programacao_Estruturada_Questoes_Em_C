#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int size, i;
    char phrase[81], temp;
    
    printf("Digite uma frase, até 80 caracteres: ");
    fgets(phrase, sizeof(phrase), stdin);

    phrase[strcspn(phrase, "\n")] = '\0';
    size = strlen(phrase);

    for (i = 0; i < size; i++) {
        if (isalpha(phrase[i])) {
            if (strchr("AEIOUaeiou", phrase[i]) == NULL) {
                phrase[i] = '#';
            }
        }
    }

    for (i = 0; i < size / 2; i++) {
        temp = phrase[i];
        phrase[i] = phrase[size - 1 - i];
        phrase[size - 1 - i] = temp;
    }

    printf("frase criptografada: %s\n", phrase);

    return 0;
}