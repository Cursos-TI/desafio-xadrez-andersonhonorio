#include <stdio.h>

// Função recursiva para o movimento da Torre (para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int linhaAtual, int totalLinhas) {
    if (linhaAtual >= totalLinhas) return;

    for (int j = 0; j < 1; j++) {
        printf("Cima Direita\n");
    }

    moverBispo(linhaAtual + 1, totalLinhas);
}

// Movimento do Cavalo: 1 movimento em "L" para cima e à direita
// 2 casas para cima + 1 casa para direita
void moverCavalo() {
    const int movimentoVertical = 2;
    const int movimentoHorizontal = 1;

    for (int i = 0, j = 0; i <= movimentoVertical; i++) {
        if (i < movimentoVertical) {
            printf("Cima\n");
            continue; // ainda precisa subir mais uma vez
        }

        while (j < movimentoHorizontal) {
            if (j == 1) break;
            printf("Direita\n");
            j++;
        }
    }
}

int main() {
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Movimento da Torre (Recursivo) ---
    printf("--- Movimento da Torre ---\n");
    moverTorre(MOVIMENTO_TORRE);
    printf("\n");

    // --- Movimento da Rainha (Recursivo) ---
    printf("--- Movimento da Rainha ---\n");
    moverRainha(MOVIMENTO_RAINHA);
    printf("\n");

    // --- Movimento do Bispo (Recursivo + Loops Aninhados) ---
    printf("--- Movimento do Bispo ---\n");
    moverBispo(0, MOVIMENTO_BISPO);
    printf("\n");

    // --- Movimento do Cavalo (Loops Complexos com múltiplas variáveis e controle de fluxo) ---
    printf("--- Movimento do Cavalo ---\n");
    moverCavalo();
    printf("\n");

    return 0;
}
