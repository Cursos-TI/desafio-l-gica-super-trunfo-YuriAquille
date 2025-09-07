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

printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s | Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           c1.cidade, c1.populacao, c1.area, c1.pib, c1.pontosTuristicos);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s | Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           c2.cidade, c2.populacao, c2.area, c2.pib, c2.pontosTuristicos);  

 // Escolha do atributo

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

// Comparação

if(opcao == 1) {
        if(c1.populacao > c2.populacao) printf("Vencedora: %s\n", c1.cidade);
        else if(c2.populacao > c1.populacao) printf("Vencedora: %s\n", c2.cidade);
        else printf("Empate!\n");
    }
    else if(opcao == 2) {
        if(c1.area > c2.area) printf("Vencedora: %s\n", c1.cidade);
        else if(c2.area > c1.area) printf("Vencedora: %s\n", c2.cidade);
        else printf("Empate!\n");
    }
    else if(opcao == 3) {
        if(c1.pib > c2.pib) printf("Vencedora: %s\n", c1.cidade);
        else if(c2.pib > c1.pib) printf("Vencedora: %s\n", c2.cidade);
        else printf("Empate!\n");
    }
    else if(opcao == 4) {
        if(c1.pontosTuristicos > c2.pontosTuristicos) printf("Vencedora: %s\n", c1.cidade);
        else if(c2.pontosTuristicos > c1.pontosTuristicos) printf("Vencedora: %s\n", c2.cidade);
        else printf("Empate!\n");
    }
    else if(opcao == 5) {
        float dens1 = c1.populacao / c1.area;
        float dens2 = c2.populacao / c2.area;
        if(dens1 < dens2) printf("Vencedora: %s\n", c1.cidade);
        else if(dens2 < dens1) printf("Vencedora: %s\n", c2.cidade);
        else printf("Empate!\n");
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
