#include <stdio.h>

int main() {
    float salary, rate, raise, newSalary;
    char choice;
    choice = 'S';
    while (choice == 'S'|| choice == 's')
    {
        printf("Insira o salário: ");
        scanf("%f", &salary);
        if (salary < 1320.0)
        {
            printf("O programa não aceita salários abaixo do salário mínimo (R$ 1320.00).\n");
            break;
        }
        if (salary <= 1500.0)
        {
            rate = 20.0 / 100.0;
        }
        else if (salary <= 2500.0)
        {
            rate = 15.0 / 100.0;
        }
        else if (salary <= 4000.0)
        {
            rate = 10.0 / 100.0;
        }
        else
        {
            rate = 5.0 / 100.0;
        }
        raise = rate * salary;
        newSalary = salary + raise;
        printf("O funcionário terá aumento de R$ %.2f e passará a receber R$ %.2f.\n", raise, newSalary);
        printf("Deseja continuar? Digite 'S' para sim ou 'N' para não.\n");
        scanf(" %c", &choice);
    }
return 0;
}