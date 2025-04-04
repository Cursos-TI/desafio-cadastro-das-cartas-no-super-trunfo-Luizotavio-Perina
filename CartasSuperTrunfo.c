#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastrando as variáveis
    int populacao1, populacao2, np1, np2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, percapita1, percapita2;
    char codigocarta1[5], codigocarta2[5], cidade1[40], cidade2[40], estado1, estado2;

    printf("BEM VINDO ao novo jogo SUPER TRUNFO\n");
    printf("Cadastre suas cartas!\n");

    // Cadastro da primeira carta
    printf("\nCADASTRE A CARTA 1:\n");

    printf("Digite a letra que representa o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01, B02): ");
    scanf(" %s", codigocarta1);

    getchar();  // utilizei ogetchar para capturar o ENTER para evitar erro na leitura da string seguinte
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &np1);

    // Cadastro da segunda carta
    printf("\nCADASTRE A CARTA 2:\n");

    printf("Digite a letra que representa o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01, B02): ");
    scanf(" %s", codigocarta2);

    getchar();
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &np2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = pib1 * 1000000000 / populacao1; 
    percapita2 = pib2 * 1000000000 / populacao2;

    // Exibição da primeira carta
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", np1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    // Exibição da segunda carta
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", np2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);

    return 0;
}
