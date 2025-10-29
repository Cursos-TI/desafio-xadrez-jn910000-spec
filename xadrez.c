#include <stdio.h>

// Definição das constantes para os limites de movimento.
const int LIMITE_BISPO = 5;
const int LIMITE_TORRE = 5;
const int LIMITE_RAINHA = 8;

int main() {
    
    // Movimentação do BISPO: 5 casas na diagonal (Cima, Direita)
    int contador_bispo = 0;
    while (contador_bispo < LIMITE_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimentação da TORRE: 5 casas para a Direita
    for (int i = 0; i < LIMITE_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimentação da RAINHA: 8 casas para a Esquerda
    int contador_rainha = 0;
    if (LIMITE_RAINHA > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < LIMITE_RAINHA);
    }

    return 0;
}