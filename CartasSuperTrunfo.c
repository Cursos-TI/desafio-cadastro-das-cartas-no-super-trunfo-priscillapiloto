#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Teste Priscilla Piloto
// Definição da estrutura para armazenar as informações da cidade
typedef struct {
    char estado;
    char codigo[4]; // Código da carta, como A01, A02, B01, B02, etc.
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

// Função para exibir os dados cadastrados de forma organizada
void exibir_dados(Cidade cidade) {
    printf("\nCidade Cadastrada:\n");
    printf("Estado: %c\n", cidade.estado);
    printf("Código da Carta: %s\n", cidade.codigo);
    printf("Nome da Cidade: %s\n", cidade.nome);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    printf("\nCadastro realizado com sucesso!\n");
}

// Função para cadastrar uma cidade
void cadastrar_cidade() {
    Cidade cidade;

    // Entrada de dados
    printf("Digite o estado (letra A a H): ");
    scanf(" %c", &cidade.estado); // Espaço antes de %c para capturar corretamente a primeira letra
    printf("Digite o código da carta (exemplo: A01, A02, B01, ...): ");
    scanf("%s", cidade.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade.nome); // Lê o nome da cidade com espaços
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade.populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &cidade.pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &cidade.pontos_turisticos);

    // Exibe os dados cadastrados
    exibir_dados(cidade);
}

// Função principal do sistema
int main() {
    char opcao;

    printf("Bem-vindo ao sistema de cadastro de cartas de cidades!\n");

    // Loop para cadastrar várias cidades
    do {
        printf("\nDeseja cadastrar uma nova cidade? (S para sim, N para não): ");
        scanf(" %c", &opcao);

        if (opcao == 'S' || opcao == 's') {
            cadastrar_cidade();
        } else if (opcao == 'N' || opcao == 'n') {
            printf("Saindo do sistema.\n");
            break;
        } else {
            printf("Resposta inválida. Por favor, digite 'S' para sim ou 'N' para não.\n");
        }

    } while (1);

    return 0;
}
