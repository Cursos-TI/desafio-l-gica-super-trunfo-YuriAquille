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

    // Cadastro da carta 1
 printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", c1.estado);
    printf("Codigo: ");
    scanf(" %[^\n]", c1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", c1.cidade);
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    printf("Area (km2): ");
    scanf("%f", &c1.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &c1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &c1.pontosTuristicos);   

    // cadastro da carta 2

printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", c2.estado);
    printf("Codigo: ");
    scanf(" %[^\n]", c2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", c2.cidade);
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    printf("Area (km2): ");
    scanf("%f", &c2.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &c2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    // Mostrar cartas