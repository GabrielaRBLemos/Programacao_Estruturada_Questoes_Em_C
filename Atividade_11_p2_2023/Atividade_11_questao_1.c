#include <stdio.h>
#include <string.h>

int main() {
    char sentance[81];
    int i;

    printf("Digite uma frase, até 80 caracteres: ");
    fgets(sentance, sizeof(sentance), stdin);

    sentance[strcspn(sentance, "\n")] = '\0';

    for (i = 0; sentance[i] != '\0'; i++) {
        switch (sentance[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                sentance[i] = '*';
        }
    }

    printf("Frase criptografada: %s\n", sentance);

    return 0;
}
