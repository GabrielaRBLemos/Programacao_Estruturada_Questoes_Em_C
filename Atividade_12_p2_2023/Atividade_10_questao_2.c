#include <stdio.h>
#include <ctype.h>

int compareSequences(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        char c1 = tolower(*str1);
        char c2 = tolower(*str2);

        if (c1 != c2) {
            return 0;
        }

        str1++;
        str2++;
    }

    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char input1[51];
    char input2[51];

    printf("Digite a primeira sequência de caracteres, até 50 caracteres: ");
    fgets(input1, sizeof(input1), stdin);

    printf("Digite a segunda sequência de caracteres, até 50 caracteres: ");
    fgets(input2, sizeof(input2), stdin);

    if (compareSequences(input1, input2)) {
        printf("As sequências são iguais.\n");
    } else {
        printf("As sequências são diferentes.\n");
    }

    return 0;
}