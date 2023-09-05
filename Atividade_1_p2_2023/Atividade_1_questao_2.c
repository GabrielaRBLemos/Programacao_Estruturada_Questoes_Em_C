#include <stdio.h>

int main() {
    char digit;
    printf("Digite um caractere: ");
    scanf("%c", &digit);

    switch (digit)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("O caractere digitado é uma letra vogal maiúscula.\n");
            break;
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("O caractere digitado é uma letra consoante maiúscula.\n");
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("O caractere digitado é uma letra vogal minúscula.\n");
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            printf("O caractere digitado é uma letra consoante minúscula.\n");
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            printf("O caractere digitado é uma número.\n");
            break;
        default:
            printf("O caractere digitado é uma símbolo.\n");
            break;
    }

return 0;
}