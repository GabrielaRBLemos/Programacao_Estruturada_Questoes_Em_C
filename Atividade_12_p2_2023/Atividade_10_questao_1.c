#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str) {
    int len = strlen(str);
    int i, j;

    i = 0;
    j = len - 1;

    while (i < j) {
        while (i < len && isspace(str[i])) {
            i++;
        }
        while (j >= 0 && isspace(str[j])) {
            j--;
        }

        if (i < j && tolower(str[i]) != tolower(str[j])) {
            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

int main() {
    char input[100];
    
    printf("Insira uma sequencia de caracteres: ");
    fgets(input, sizeof(input), stdin);
    
    if (isPalindrome(input)) {
        printf("A sequência é um palíndromo.\n");
    } else {
        printf("A sequência não é um palíndromo.\n");
    }
    
    return 0;
}
