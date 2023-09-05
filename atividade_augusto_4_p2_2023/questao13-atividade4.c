#include <stdio.h>
#include <stdlib.h>

int main(){
    float salary, raiseRate, raise;
    printf("Digite o salário do funcionário, em reais:\n");
    scanf("%f", &salary);
    if (salary > 1500.0)
    {
        raiseRate = 1.0/10.0;
    }
    else
    {
        raiseRate = 15.0/100.0;
    }
    raise = salary * raiseRate;

    printf("O aumento deve ser de %.2f.\n", raise);
    return 0;
}