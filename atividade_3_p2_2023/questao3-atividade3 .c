#include <stdio.h>
#include <stdlib.h>

int main(){
char name[100];
printf("Digite o seu nome:\n");
scanf("%s", &name);
printf("Bem vindo(a), %s.\n", name);
return 0;
}
