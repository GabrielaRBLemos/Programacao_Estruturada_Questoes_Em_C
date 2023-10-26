#include <stdio.h>
#include <string.h>
#include <math.h>

int valida(char conta[], char dv) {
  int tam = strlen(conta), vet[tam], i, soma, resto, numDV, power;
  if (tam != 6) {
    return 0;
  } else {
    soma = 0;
    for (i = 0; i < tam; i++) {
      vet[i] = conta[i] - '0';
      power = (int) pow(2, i);
      soma = soma + vet[i] * power;
    }
    resto = soma % 11;
    if (resto >= 0 && resto <= 9) {
        numDV = dv - '0';
      if (numDV == resto) {
        return 1;
      } else {
        return 0;
      }
    } else {
      if (dv == 'x' || dv == 'X') {
        return 1;
      } else {
        return 0;
      }
    }
  }
}
int main() {
  char conta[7], dv;
  int retorno;
  printf("Conta: ");
  scanf(" %s", conta);
  fflush(stdin);
  printf("DV: ");
  scanf(" %c", &dv);
  fflush(stdin);
  retorno = valida(conta, dv);
  if (retorno == 0) {
    printf("Dígito verificado inválido!\n");
  } else {
    printf("Dígito verificado válido!\n");
  }
}