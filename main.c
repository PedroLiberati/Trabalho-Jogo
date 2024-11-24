#include <stdio.h>
#include "jogo.h"

int main() {
    int opcao;


    do {
        printf("=== Jogo Adivinhar ===\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Estatísticas\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:

                iniciarJogo();

                break;

            case 2:

                mostrarEstatisticas();

                break;
            case 0:

                printf("Saindo do jogo...\n");

                break;

            default:

                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
