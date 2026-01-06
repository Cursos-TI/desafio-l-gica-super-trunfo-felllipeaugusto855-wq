#include <stdio.h>
#include <string.h>

// Definição da estrutura de uma carta do Super Trunfo
typedef struct {
    char nome_cidade[50];
    char estado[30];
    char codigo[10];
    float populacao;           // em milhões
    float area;                // em km²
    float pib;                 // em bilhões de reais
    int pontos_turisticos;
} Carta;

int main() {
    // Carta do Rio de Janeiro
    Carta carta_rio;
    strcpy(carta_rio.nome_cidade, "Rio de Janeiro");
    strcpy(carta_rio.estado, "Rio de Janeiro");
    strcpy(carta_rio.codigo, "A01");
    carta_rio.populacao = 6.731;       // estimativa IBGE julho/2025
    carta_rio.area = 1200.3;
    carta_rio.pib = 360.0;
    carta_rio.pontos_turisticos = 58;

    // Carta de Goiânia
    Carta carta_goiania;
    strcpy(carta_goiania.nome_cidade, "Goiânia");
    strcpy(carta_goiania.estado, "Goiás");
    strcpy(carta_goiania.codigo, "A03");
    carta_goiania.populacao = 1.503;   // estimativa IBGE julho/2025
    carta_goiania.area = 729.3;
    carta_goiania.pib = 75.8;
    carta_goiania.pontos_turisticos = 8;

    // Exibindo as cartas
    printf("=== Carta Super Trunfo - Rio de Janeiro ===\n");
    printf("Cidade: %s\n", carta_rio.nome_cidade);
    printf("Área: %.1f km²\n", carta_rio.area);
    printf("Pontos Turísticos: %d\n\n", carta_rio.pontos_turisticos);

    printf("=== Carta Super Trunfo - Goiânia ===\n");
    printf("Cidade: %s\n", carta_goiania.nome_cidade);
    printf("Área: %.1f km²\n", carta_goiania.area);
    printf("Pontos Turísticos: %d\n\n", carta_goiania.pontos_turisticos);

    return 0;
}

   