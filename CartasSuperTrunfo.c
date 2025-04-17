#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
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

    getchar();
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

    // Calculando o super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + np1 + percapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + np2 + percapita2 + (1.0 / densidade2);

    // Comparações
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

    // Comparação específica PIB
    printf("\nComparação de cartas (Atributo: PIB):\n\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
    if (pib1 > pib2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // MENU INTERATIVO COM SWITCH
    int escolha;
    printf("\n\n------ MENU DE COMPARAÇÃO ------\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("--------------------------------\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nComparando População:\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, np1);
            printf("%s: %d pontos\n", cidade2, np2);
            if (np1 > np2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (np2 > np1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("\nComparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 6:
            printf("\nComparando PIB per Capita:\n");
            printf("%s: %.2f reais\n", cidade1, percapita1);
            printf("%s: %.2f reais\n", cidade2, percapita2);
            if (percapita1 > percapita2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (percapita2 > percapita1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }


    return 0;
}
