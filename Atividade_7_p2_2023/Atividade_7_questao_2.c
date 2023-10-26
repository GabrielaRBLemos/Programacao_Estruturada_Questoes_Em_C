#include <stdio.h>

void exibeDecrescente(int n) {
  if (n > 0) {
    exibeDecrescente(n - 1);
    printf("%d ", n);
  }
}
int main() {
  int num;
  printf("Informe um número inteiro: ");
  scanf("%d", & num);
  exibeDecrescente(num);
  printf("\n");
  return 0;
}