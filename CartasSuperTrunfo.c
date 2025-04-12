#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastrando as variáveis
    int populacao1, populacao2, np1, np2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, percapita1, percapita2;
    float superpoder1, superpoder2;
    char codigocarta1[5], codigocarta2[5], cidade1[40], cidade2[40], estado1[2], estado2[2];

    printf("BEM VINDO ao novo jogo SUPER TRUNFO\n");
    printf("Cadastre suas cartas!\n");

    // Cadastro da primeira carta
    printf("\nCADASTRE A CARTA 1:\n");

    printf("Digite a sigla o ESTADO: ");
    scanf(" %[^\n]s", estado1);

    printf("Código da Carta (ex: A01, B02): ");
    scanf(" %s", codigocarta1);

    getchar();  // utilizei o getchar para capturar o ENTER para evitar erro na leitura da string seguinte
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

    printf("Digite a sigla o ESTADO: ");
    scanf(" %[^\n]s", estado2);

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
    printf("Estado: %s\n", estado1);
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
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", np2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);


    // Calculando o super poder (desafio aventureiro tema 1)
    superpoder1 = (float)populacao1 + area1 + pib1 + np1 + percapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + np2 + percapita2 + (1.0 / densidade2);


    // Comparações (desafio mestre tema 1)
    printf("\nComparação de Cartas:\n");
    printf("População: %s ; venceu (%d)\n", 
           (populacao1 > populacao2) ? "Carta 1" : "Carta 2", 
           populacao1 > populacao2);
    printf("Área: %s venceu (%d)\n", 
           (area1 > area2) ? "Carta 1" : "Carta 2", 
           area1 > area2);
    printf("PIB: %s venceu (%d)\n", 
           (pib1 > pib2) ? "Carta 1" : "Carta 2", 
           pib1 > pib2);
    printf("Pontos Turísticos: %s venceu (%d)\n", 
           (np1 > np2) ? "Carta 1" : "Carta 2", 
           np1 > np2);
    printf("Densidade Populacional: %s venceu (%d)\n", 
           (densidade1 < densidade2) ? "Carta 1" : "Carta 2", 
           densidade1 < densidade2); // menor vence
    printf("PIB per Capita: %s venceu (%d)\n", 
           (percapita1 > percapita2) ? "Carta 1" : "Carta 2", 
           percapita1 > percapita2);
    printf("Super Poder: %s venceu (%d)\n", 
           (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2", 
           superpoder1 > superpoder2);

    // Comparação de cartas (Atributo: PIB) (desafio novato tema 2)
       printf("\nComparação de cartas (Atributo: PIB):\n\n");
       printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
       printf("Carta 2 - %s (%s1): %.2f bilhões de reais\n", cidade2, estado2, pib2);
    //  Comparação utilizando o if (desafio novato tema 2)
    if (pib1 > pib2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
