#include <stdio.h>

int main() 
{
    int voto, totais[10], i;
    float percJoao, percMaria, percPedro, percLuis, percAna, percLuiza, percSilvia, percAndre, percBranco, percNulo;
    char answer;
    for (i = 0; i < 10; i++)
    {
        totais[i] = 0;
    }
    while (1==1)
    {
        answer = '0';
        /*totais[9] = nulo, totais[10] = total de eleitores*/
        printf("0 – Voto em branco\n1 – Voto em João\n2 – Voto em Maria\n3 – Voto em Pedro\n4 – Voto em Luís\n5 – Voto em Ana\n6 – Voto em Luiza\n7 – Voto em Silvia\n8 – Voto em André\nDigite seu voto:");
        scanf("%d", &voto);
        totais[10] =  totais[10] + 1;
        switch (voto)
        {
        case 0:
            totais[0] = totais[0] + 1;
            break;
        case 1:
            totais[1] = totais[1] + 1;
            break;
        case 2:
            totais[2] = totais[2] + 1;
            break;
        case 3:
            totais[3] = totais[3] + 1;
            break;
        case 4:
            totais[4] = totais[4] + 1;
            break;
        case 5:
            totais[5] = totais[5] + 1;
            break;
        case 6:
            totais[6] = totais[6] + 1;
            break;
        case 7:
            totais[7] = totais[7] + 1;
            break;
        case 8:
            totais[8] = totais[8] + 1;
            break;
        default:
            totais[9] = totais[9] + 1;
            break;
        }
        printf("Outro eleitor deseja votar? [S/N]\n");
        while (1==1)
        {
            scanf("%c", &answer);
            if (answer == 'S' || answer == 's'|| answer == 'N' || answer == 'n')
            {
                break;
            }
            else
            {
                printf("O usuário deve responder s ou S,para sim ou  n ou N, para não.\n");
            }
            
        }
        if (answer == 'N' || answer == 'n')
        {
            break;
        }
    }
    percJoao = (float)totais[1] / totais[10] * 100;
    percMaria = (float)totais[2] / totais[10] * 100;
    percPedro = (float)totais[3] / totais[10] * 100;
    percLuis = (float)totais[4] / totais[10] * 100;
    percAna = (float)totais[5] / totais[10] * 100;
    percLuiza = (float)totais[6] / totais[10] * 100;
    percSilvia = (float)totais[7] / totais[10] * 100;
    percAndre = (float)totais[8] / totais[10] * 100;
    percBranco = (float)totais[0] / totais[10] * 100;
    percNulo = (float)totais[9] / totais[10] * 100;
    printf("Percentual de votos:\n");
    printf("João: %.2f%%\n", percJoao);
    printf("Maria: %.2f%%\n", percMaria);
    printf("Pedro: %.2f%%\n", percPedro);
    printf("Luís: %.2f%%\n", percLuis);
    printf("Ana: %.2f%%\n", percAna);
    printf("Luiza: %.2f%%\n", percLuiza);
    printf("Silvia: %.2f%%\n", percSilvia);
    printf("André: %.2f%%\n", percAndre);
    printf("Voto em Branco: %.2f%%\n", percBranco);
    printf("Voto Nulo: %.2f%%\n", percNulo);
    return 0;
}