#include <stdio.h>

int main() {
    char estado1, estado2;  // estado
    char codigo1[4], codigo2[4];  // "A01" -> 3 caracteres + 1 para o '\0'
    char nome1[50], nome2[50];  // Nome da cidade
    int populacao1, populacao2;  // População
    float area1, area2, pib1, pib2;  // area e pib
    int pontosTuristicos1, pontosTuristicos2;  // pontos turisticos

    // Entrada de dados da primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);  // Le a string inteira, incluindo espacos

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);  //coloquei isso para a Leitura da string inteira, incluindo espacos para evitar erros

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibicao das cartas
    printf("\n--------------------------------------\n");
    printf("|          SUPER TRUNFO CIDADES      |\n");
    printf("--------------------------------------\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c | Codigo: %s\n", estado1, codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d hab.\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c | Codigo: %s\n", estado2, codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d hab.\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\n--------------------------------------\n");
    printf("|          SUPER TRUNFO CIDADES      |\n");
    printf("--------------------------------------\n");

    return 0;
}
