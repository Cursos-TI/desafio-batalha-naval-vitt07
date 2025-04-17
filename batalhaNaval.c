#include <stdio.h>

int main() {
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    printf(" BATALHA NAVAL!\n");

    // Inicializa o tabuleiro com 0
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
 
    // Imprime as letras no topo (colunas)
    printf("    "); // espaço para alinhar com os números
    for (int j = 0; j < 10; j++) {
        printf(" %c ", colunas[j]);
    }
    printf("\n");

    // Imprime o tabuleiro com os números à esquerda (linhas)
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]); // imprime o valor da célula
        }
        printf("\n");
    }

    return 0;
}
