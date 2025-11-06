#include <stdio.h>

// Estrutura da carta
typedef struct {
    char estado;               // Letra de 'A' a 'H'
    char codigo[4];            // Ex: "A01"
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // População
    float area;                // Área em km²
    float pib;                 // PIB (em bilhões de reais)
    int pontosTuristicos;      // Número de pontos turísticos
} Carta;
int main() {
    // Carta 1 - Santa Catarina
    Carta carta1 = {
        'A',                  // Estado
        "A01",                // Código
        "Santa Catarina",     // Nome da cidade
        8187029,              // População
        95346.0,              // Área (km²)
        428.571,              // PIB (bilhões de reais)
        60                    // Pontos turísticos
    };

    // Exibir informações da carta
    printf("=== SUPER TRUNFO ===\n\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.3f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

// Estrutura da carta
typedef struct {
    char estado;               // Letra de 'A' a 'H'
    char codigo[3];            // Ex: "A01"
    char nomeCidade[40];       // Nome da cidade
    int populacao;             // População
    float area;                // Área em km²
    float pib;                 // PIB (em bilhões de reais)
    int pontosTuristicos;      // Número de pontos turísticos
} Carta;
int main() {
    // Carta 2 - Rio Grande do Sul
    Carta carta2 = {
        'B',                  // Estado
        "B01",                // Código
        "Rio Grande do Sul",     // Nome da cidade
        10882965,              // População
        281707,              // Área (km²)
        706.082,              // PIB (bilhões de reais)
        70                    // Pontos turísticos
    };

    // Exibir informações da carta
    printf("=== SUPER TRUNFO ===\n\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.3f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    return 0;
}