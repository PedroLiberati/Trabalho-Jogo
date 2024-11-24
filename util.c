#include <stdio.h>
#include "util.h"

void salvarEstatisticas(int tentativas) {

    FILE *file = fopen("estatisticas.bin", "ab");

    if (file) {
        fwrite(&tentativas, sizeof(int), 1, file);

        fclose(file);
    }
}
