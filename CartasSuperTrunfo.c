#include <stdio.h>

int main() {
    // Coloquei as variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Solicitação dos dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  
    getchar();  // Limpar o buffer 
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();  // Limpar o buffer
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);  
    printf("População: ");
    scanf("%d", &populacao1);
    getchar();  // Limpar o buffer
    printf("Área (em km²): ");
    scanf("%f", &area1);
    getchar();  // Limpar o buffer
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    getchar();  // Limpar o buffer
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    getchar();  // Limpar o buffer

    // Solicitação dos dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  
    getchar();  // Limpar o buffer
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    getchar();  // Limpar o buffer
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);  
    printf("População: ");
    scanf("%d", &populacao2);
    getchar();  // Limpar o buffer
    printf("Área (em km²): ");
    scanf("%f", &area2);
    getchar();  // Limpar o buffer
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    getchar();  // Limpar o buffer
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    getchar();  // Limpar o buffer

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
