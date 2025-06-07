#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    // Entrada de dados da primeira cidade
    printf("Informe os dados da primeira carta:\n");
    printf("Estado: "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda cidade
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder (valores somados com inverso da densidade)
    superPoder1 = populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição dos resultados da comparação
    printf("\nResultados da comparação:\n");
    printf("População: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2"); // Menor densidade vence
    printf("PIB per Capita: %s venceu\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2");

    return 0;
}
