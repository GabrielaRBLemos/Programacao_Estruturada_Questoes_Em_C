#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BICYCLE 1
#define BOMB 2

void fillBoard(int size, int board[size][size]) {
    int i, j;
    int bicicletas = 0, bombas = 0;

    srand(time(NULL));

    while (bicicletas < 5 && bombas < 5) {
        i = rand() % size;
        j = rand() % size;

        if (board[i][j] == 0) {
            if (bicicletas < 5) {
                board[i][j] = BICYCLE;
                bicicletas++;
            } else {
                board[i][j] = BOMB;
                bombas++;
            }
        }
    }
}

void printBoard(int size, int board[size][size]) {
    int i, j;
    printf("  0 1 2 3 4\n");
    for (i = 0; i < size; i++) {
        printf("%d ", i);
        for (j = 0; j < size; j++) {
            if (board[i][j] == 0) {
                printf(". ");
            } else if (board[i][j] == BICYCLE) {
                printf("B ");
            } else if (board[i][j] == BOMB) {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    size = 5;
    int board[size][size] = {0}, lifes, shot, row, column;

    shot = 0;
    lifes = 5;

    fillBoard(board);

    printf("Bem-vindo ao jogo da bicicleta! Encontre as 5 bicicletas sem acertar as bombas.\n");

    while (shot < 10) {
        printf("\nTentativa %d (lifes restantes: %d):\n", shot + 1, lifes);
        printBoard(board);

        do {
            printf("Digite a row (0-4): ");
            scanf("%d", &row);
            printf("Digite a column (0-4): ");
            scanf("%d", &column);
            if (row < 0 || row >= size || column < 0 || column >= size || board[row][column] != 0) {
                printf("Posição inválida. Tente novamente.\n");
            }
        } while (row < 0 || row >= size || column < 0 || column >= size || board[row][column] != 0);

        if (board[row][column] == BICYCLE) {
            printf("Parabéns! Você encontrou uma bicicleta.\n");
        } else if (board[row][column] == BOMB) {
            printf("Você acertou uma bomba. Perdeu uma vida.\n");
            lifes--;
        }

        board[row][column] = -1;

        if (lifes == 0) {
            printf("Você perdeu todas as lifes. Fim do jogo.\n");
            break;
        }

        int bicicletasEncontradas = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (board[i][j] == -1) {
                    bicicletasEncontradas++;
                }
            }
        }

        if (bicicletasEncontradas == 5) {
            printf("Parabéns! Você encontrou todas as bicicletas. Você ganhou o jogo!\n");
            break;
        }

        shot++;
    }

    if (shot == 10) {
        printf("Você usou todas as tentativas. Fim do jogo.\n");
    }

    return 0;
}
