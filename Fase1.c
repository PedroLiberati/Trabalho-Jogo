#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fase1() {

    int numero, tentativa, tentativas = 0;

    srand(time(NULL));

    numero = rand() % 100 + 1; 

    printf("Fase 1: Adivinhe o número entre 1 e 100!\n");

    do {

        printf("Digite sua tentativa: ");

        scanf("%d", &tentativa);

        tentativas++;


        if (tentativa < numero) {

            printf("Muito baixo!\n");

        } else if (tentativa > numero) {

            printf("Muito alto!\n");

        } else {

            printf("Parabéns! Você adivinhou o número em %d tentativas!\n", tentativas);
        }
    } while (tentativa != numero);
}
