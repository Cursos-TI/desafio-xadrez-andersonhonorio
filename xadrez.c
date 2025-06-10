#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Declaração de variáveis constantes para o número de casas a serem movidas por cada peça.
    const int MOVIMENTO_TORRE = 5;  // A Torre se move 5 casas para a direita.
    const int MOVIMENTO_BISPO = 5;  // O Bispo se move 5 casas na diagonal.
    const int MOVIMENTO_RAINHA = 8; // A Rainha se move 8 casas para a esquerda.

    // --- Implementação de Movimentação da Torre (usando for) ---
    // A Torre se move em linha reta horizontalmente ou verticalmente.
    printf("--- Movimento da Torre ---\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Implementação de Movimentação do Bispo (usando while) ---
    // O Bispo se move na diagonal.
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 0;
    while (casasBispo < MOVIMENTO_BISPO) {
        printf("Cima Direita\n"); 
        casasBispo++;
    }
    printf("\n");

    // --- Implementação de Movimentação da Rainha (usando do-while) ---
    // A Rainha se move em todas as direções.
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}
