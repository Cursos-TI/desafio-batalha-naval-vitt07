#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    printf("BATALHA NAVAL!\n");
    // Inicializando o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
 // Posiciona navio vertical (coluna 2: índices [1][2], [2][2], [3][2])
 tabuleiro[1][2] = 1;
 tabuleiro[2][2] = 1;
 tabuleiro[3][2] = 1;

 // Posiciona navio horizontal (linha 7: índice [7][5] até [7][8])
 tabuleiro[7][5] = 1;
 tabuleiro[7][6] = 1;
 tabuleiro[7][7] = 1;
 tabuleiro[7][8] = 1;
 
    // Imprime o cabeçalho das colunas (números 1 a 10)
    printf("   ");  // espaço para o canto superior esquerdo
    for (int j = 0; j < 10; j++) {
        printf(" %2d", j + 1);
    }
    printf("\n");

    // Imprime cada linha (letra + valores da linha)
    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);  // letra da linha
        for (int j = 0; j < 10; j++) {
            printf(" %2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
