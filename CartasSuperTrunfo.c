#include <stdio.h>   // Desafio Super Trunfo - Países 
// Tema 1 - Cadastro das Cartas 
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastrando as variáveis
    int populacao1, populacao2, np1, np2;
    float area1, area2, pib1, pib2;
    char codigocarta1[5], codigocarta2[5], cidade1[40], cidade2[40], estado1, estado2;


   // Frase de bem-vindo
   printf("BEM VINDO ao novo jogo SUPER TRUNFO\n");
   printf("Cadastre suas cartas!\n");

    //Inserindo os dados da primeira carta
    printf("CADASTRE A CARTA 1:\n");

    printf("Digite a letra que representa o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigocarta1);
    
    getchar();
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &np1);
    
    
    // Inserindo os dados da segunda carta
    printf("\nCADASTRE A CARTA 2:\n");

    printf("Digite a letra que representa o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &np2);


    
    // Exibição da primeira carta
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", np1);
    
    //Exibição da segunda carta
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", np2);
    
    return 0;  // Fim do programa
}
