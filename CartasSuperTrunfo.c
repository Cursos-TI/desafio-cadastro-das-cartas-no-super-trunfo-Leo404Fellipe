#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1, codigo1[5], nome1[50];
    unsigned long int pop1;
    float area1, pib1;
    int pontos1;

    // Variáveis da carta 2
    char estado2, codigo2[5], nome2[50];
    unsigned long int pop2;
    float area2, pib2;
    int pontos2;

    // Variáveis para cálculos
    float dens1, dens2;
    float pibCap1, pibCap2;
    float poder1, poder2;

    // Carta 1
    printf("Carta 1:\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01, B02): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a Populacao: ");
    scanf("%lu", &pop1);

    printf("Digite a Area em km² : ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B01, C03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a Populacao: ");
    scanf("%lu", &pop2);

    printf("Digite a Area em km² : ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Calculos
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibCap1 = pib1 / pop1;
    pibCap2 = pib2 / pop2;

    poder1 = pop1 + area1 + pib1 + pontos1 + pibCap1 + (1 / dens1);
    poder2 = pop2 + area2 + pib2 + pontos2 + pibCap2 + (1 / dens2);

    // Mostrar carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", pop1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", dens1);
    printf("PIB per Capita: %.8f\n", pibCap1);
    printf("Super Poder: %.2f\n", poder1);

    // Mostrar carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", dens2);
    printf("PIB per Capita: %.8f\n", pibCap2);
    printf("Super Poder: %.2f\n", poder2);

    // Comparações e resultados
    printf("\nComparacao de atributos (1 = Carta 1 vence, 0 = Carta 2 vence):\n");

    int resPop = pop1 > pop2;
    printf("Populacao: %d - Carta %d ganhou\n", resPop, resPop ? 1 : 2);

    int resArea = area1 > area2;
    printf("Area: %d - Carta %d ganhou\n", resArea, resArea ? 1 : 2);

    int resPIB = pib1 > pib2;
    printf("PIB: %d - Carta %d ganhou\n", resPIB, resPIB ? 1 : 2);

    int resDens = dens1 < dens2; // menor vence
    printf("Densidade Populacional (menor vence): %d - Carta %d ganhou\n", resDens, resDens ? 1 : 2);

    int resPibCap = pibCap1 > pibCap2;
    printf("PIB per Capita: %d - Carta %d ganhou\n", resPibCap, resPibCap ? 1 : 2);

    int resPontos = pontos1 > pontos2;
    printf("Numero de Pontos Turisticos: %d - Carta %d ganhou\n", resPontos, resPontos ? 1 : 2);

    int resPoder = poder1 > poder2;
    printf("Super Poder: %d - Carta %d ganhou\n", resPoder, resPoder ? 1 : 2);

    return 0;
}
