#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao;
    char estado[50];
    int pontos_turisticos;
    char nome_cidade[50];
    char codigo_cidade[8];
    float area;
    float pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a População: \n");
    scanf("%d ", &populacao);
    
    printf("Digite o Estado: \n");
    scanf("%s ", &estado);
    
    printf("Digite o Número de Pontos Turisticos: \n");
    scanf("%d ", &pontos_turisticos);
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s ", &nome_cidade);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s ", &codigo_cidade);
    
    printf("Digite a Área em Km²: \n");
    scanf("%f ", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f ", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("População: %d ", populacao);
    printf("Estado: %s ", estado);
    printf("Ponto Turistico: %d ", pontos_turisticos);
    printf("Cidade: %s ", nome_cidade);
    printf("Codigo: %s ", codigo_cidade);
    printf("Area em Km²: %f ", area);
    printf("PIB: %f ", pib);

    return 0;
}
