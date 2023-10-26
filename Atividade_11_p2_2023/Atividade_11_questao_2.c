#include <stdio.h>
#include <string.h>

int main() {
    int tamanho, i;
    char phrase[101];
    char criptographed[101];
    
    printf("Digite uma frase, até 100 caracteres: ");
    fgets(phrase, sizeof(phrase), stdin);

    phrase[strcspn(phrase, "\n")] = '\0';

    tamanho = strlen(phrase);

    for (i = 0; i < tamanho; i++) {
        criptographed[i] = phrase[tamanho - 1 - i];
    }
    criptographed[tamanho] = '\0';

    printf("Frase criptografada: %s\n", criptographed);

    return 0;
}
