#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"
#include "util.h"


void iniciarJogo() {
    int fase;

    for (fase = 1; fase <= 5; fase++) {

        printf("Iniciando Fase %d...\n", fase);
        switch (fase) {

            case 1: fase1(); break;

            case 2: fase2(); break;

            case 3: fase3(); break;

            case 4: fase4(); break;

            case 5: fase5(); break;
        }
    }
}

void mostrarEstatisticas() {

    FILE *file = fopen("estatisticas.bin", "rb");

    if (file) {

        fclose(file);

    } else {
        printf("Não há estatísticas disponíveis.\n");
    }

}
