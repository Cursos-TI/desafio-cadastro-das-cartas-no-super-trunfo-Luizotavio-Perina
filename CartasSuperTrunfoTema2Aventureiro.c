#include <stdio.h>

int main() {
    int populacao1, populacao2, np1, np2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, percapita1, percapita2;
    float superpoder1, superpoder2;
    char codigocarta1[5], codigocarta2[5], cidade1[40], cidade2[40], estado1[3], estado2[3];

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

    // Cálculo do Super Poder
    superpoder1 = (float)populacao1 + area1 + pib1 + np1 + percapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + np2 + percapita2 + (1.0 / densidade2);

    // Menu
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%s) x %s (%s):\n", cidade1, estado1, cidade2, estado2);

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Área:\n");
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
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, np1);
            printf("%s: %d\n", cidade2, np2);
            if (np1 > np2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (np2 > np1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional (vence o MENOR):\n");
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
            printf("Super Poder:\n");
            printf("%s: %.2f\n", cidade1, superpoder1);
            printf("%s: %.2f\n", cidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (superpoder2 > superpoder1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
