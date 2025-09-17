#include <stdio.h>
// Pablo Sousa
// Definição para armazenar os dados da carta
typedef struct {
    char estado;                // Letra de 'A' a 'H'
    char codigo[4];             // Ex: A01, B03
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB
    int pontosTuristicos;       // Número de pontos turísticos
} Carta;

int main() {
    Carta cartas[2]; // Vamos armazenar duas cartas
    int i;

    for (i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Informe o estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Informe o codigo da carta (Ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Informe o nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);  // lê até o ENTER, incluindo espaços

        printf("Informe a populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Informe a area em km²: ");
        scanf("%f", &cartas[i].area);

        printf("Informe o PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Informe o numero de pontos turisticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Exibição dos dados
    printf("\n======= CARTAS CADASTRADAS =======\n");
    for (i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomeCidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
