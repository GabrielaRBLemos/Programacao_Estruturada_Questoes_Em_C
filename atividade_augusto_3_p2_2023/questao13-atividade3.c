#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char toBeCounted[1000];
    int size, i;
    printf("Digite algo:\n");
    scanf("%s", &toBeCounted);
    size = strlen(toBeCounted);
    printf("Essa string tem %d caracteres.\n", size);
    return 0;
}