#include <stdio.h>

int main() {
    char sex, prematureBirth, cont;
    float days, newborns, prematureBabies, prematureFs, prematureMs, daysTotal, daysMean, biggestDays, percPrematureFromNB, percPrematureMFromNB, percPrematureFFromNB;
    newborns = 0.0;
    prematureBabies = 0.0;
    prematureFs = 0.0;
    prematureMs = 0.0;
    daysTotal = 0.0;
    biggestDays = 0.0;
    while(1==1)
    {
        /*coletar informação de um recém nascido*/
        printf("Insira o sexo do recém-nascido, M ou F: ");
        scanf(" %c", &sex);
        if (sex != 'M' && sex != 'F')
        {
            printf("As únicas entradas válidas são M ou F.\n");
            return 0;
        }
        printf("Digite S se o recém-nascido é prematuro ou N se não: ");
        scanf(" %c", &prematureBirth);
        if (prematureBirth != 'S' && prematureBirth != 'N')
        {
            printf("As únicas entradas válidas são S ou N.\n");
            return 0;
        }
        
        if (prematureBirth == 'S')
        {
            printf("Digite a quantidade de dias que o recém-nascido passou na incubadora: ");
            scanf(" %f", &days);
            if (days < 1.0)
            {
                printf("O número mínimo de dias é 1.\n");
                return 0;
            }
            
        }
        /*adicionar a contagem de rns*/
        newborns = newborns + 1.0;
        if (prematureBirth == 'S')
        {
            prematureBabies = prematureBabies + 1.0;
            if (sex == 'F')
            {
                prematureFs = prematureFs + 1.0;
            }
            else
            {
                prematureMs = prematureMs + 1.0;
            }
            daysTotal = daysTotal + days;
            if (days > biggestDays)
            {
                biggestDays = days;
            }
            
        }
        printf("Deseja continuar a entrada de dados? S para sim e N para não: ");
        scanf(" %c", &cont);
        if (cont == 'N')
        {
            break;
        }
    }
    /*contar a média de dias de prematuros na incubadora*/
    daysMean = daysTotal / prematureBabies;
    /*porcentagens*/
    percPrematureFromNB = prematureBabies * 100.0 / newborns;
    percPrematureMFromNB = prematureMs * 100.0 / newborns;
    percPrematureFFromNB = prematureFs * 100.0 / newborns;

    printf("A percentagem de recém-nascidos prematuros em relação ao total de recém-nascidos é %.2f%%\n", percPrematureFromNB);
    printf("A percentagem de recém-nascidos prematuros do sexo masculino em relação ao total de prematuros é %.2f%%\n", percPrematureMFromNB);
    printf("A percentagem de recém-nascidos prematuros do sexo feminino em relação ao total de prematuros é %.2f%%\n", percPrematureFFromNB);
    printf("A média de dias de permanência dos recém-nascidos prematuros na incubadora é %.2f\n", daysMean);
    printf("O maior número de dias que um recém-nascido prematuro permaneceu na incubadora é %.0f\n", biggestDays);
return 0;
}