typedef struct {
    int numeroParaAdivinhar;
    int tentativas;

} Fase;


Fase* criarFase() {

    Fase* novaFase = (Fase*)malloc(sizeof(Fase));

    novaFase->numeroParaAdivinhar = rand() % 100 + 1; // Número aleatório entre 1 e 100

    novaFase->tentativas = 0;

    return novaFase;

}

free(novaFase);
