#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado[20];
    char codigo[5];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta c1, c2;
    int opcao;