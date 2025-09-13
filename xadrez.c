#include <stdio.h>

// Constantes para as direções
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Protótipos das funções
void movimentarBispoMestre(int casas);
void movimentarTorreMestre(int casas);
void movimentarRainhaMestre(int casas);
void movimentarCavaloMestre();

int main() {
    printf("=========================================\n");
    printf("          DESAFIO DE XADREZ - NÍVEL MESTRE\n");
    printf("             MATECHECK\n");
    printf("=========================================\n");
    
    printf("Movimentação do Bispo (recursiva):\n");
    movimentarBispoMestre(5);
    
    printf("\nMovimentação da Torre (recursiva):\n");
    movimentarTorreMestre(5);
    
    printf("\nMovimentação da Rainha (recursiva):\n");
    movimentarRainhaMestre(8);
    
    printf("\nMovimentação do Cavalo (complexa):\n");
    movimentarCavaloMestre();
    
    // Pausa para evitar que o programa feche imediatamente
    printf("\nPressione Enter para sair...");
    getchar();
    getchar();
    
    return 0;
}

// Função recursiva para movimentar o Bispo (5 casas na diagonal direita para cima)
void movimentarBispoMestre(int casas) {
    if (casas <= 0) {
        return;
    }
    
    // Movimento na diagonal direita para cima
    printf("%s e %s\n", CIMA, DIREITA);
    movimentarBispoMestre(casas - 1);
}

// Função recursiva para movimentar a Torre (5 casas para a direita)
void movimentarTorreMestre(int casas) {
    if (casas <= 0) {
        return;
    }
    
    printf("%s\n", DIREITA);
    movimentarTorreMestre(casas - 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void movimentarRainhaMestre(int casas) {
    if (casas <= 0) {
        return;
    }
    
    printf("%s\n", ESQUERDA);
    movimentarRainhaMestre(casas - 1);
}

// Função complexa para movimentar o Cavalo com loops aninhados (1 vez em L para cima à direita)
void movimentarCavaloMestre() {
    // Cavalo: 1 movimento em L para cima à direita
    // Podemos representar como 2 casas para cima e 1 para a direita
    
    int movimentoCompleto = 0;
    
    // Loop externo para controlar o movimento completo
    for (int i = 0; i < 2 && !movimentoCompleto; i++) {
        // Primeira parte do movimento: duas casas para cima
        for (int j = 0; j < 2; j++) {
            printf("%s\n", CIMA);
            
            // Condição para verificar se precisamos sair do loop
            if (i == 1 && j == 0) {
                movimentoCompleto = 1;
                break; // Sai do loop interno
            }
        }
        
        if (movimentoCompleto) {
            continue; // Vai para a próxima iteração do loop externo
        }
        
        // Segunda parte do movimento: uma casa para a direita
        printf("%s\n", DIREITA);
    }
}