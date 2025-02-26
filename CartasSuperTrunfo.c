#include <stdio.h>

int main() {

//TESTE PRISCILLA

    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    Carta carta1, carta2;
    
    // Coletando dados da primeira carta
    printf("Digite o estado da primeira carta:\n ");
    scanf(" %c", &carta1.estado);
    
    printf("Digite o código da primeira carta:\n ");
    scanf("%s", carta1.codigo);
    
    printf("Digite o nome da cidade da primeira carta:\n ");
    scanf("%s", carta1.nomeCidade);
    
    printf("Digite a população da primeira carta: \n");
    scanf("%d", &carta1.populacao);
    
    printf("Digite a área da primeira carta (em km²): \n");
    scanf("%f", &carta1.area);
    
    printf("Digite o PIB da primeira carta (em bilhões de reais):\n ");
    scanf("%f", &carta1.pib);
    
    printf("Digite o número de pontos turísticos da primeira carta: \n ");
    scanf("%d", &carta1.pontosTuristicos);

    // Coletando dados da segunda carta
    printf("\nDigite o estado da segunda carta: \n");
    scanf(" %c", &carta2.estado);
    
    printf("Digite o código da segunda carta: \n");
    scanf("%s", carta2.codigo);
    
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", carta2.nomeCidade);
    
    printf("Digite a população da segunda carta:\n ");
    scanf("%d", &carta2.populacao);
    
    printf("Digite a área da segunda carta (em km²): \n");
    scanf("%f", &carta2.area);
    
    printf("Digite o PIB da segunda carta (em bilhões de reais): \n");
    scanf("%f", &carta2.pib);
    
    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo os dados coletados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s", carta1.codigo);
    printf("Nome da Cidade: %s", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s", carta2.codigo - Nome da Cidade %s, carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}