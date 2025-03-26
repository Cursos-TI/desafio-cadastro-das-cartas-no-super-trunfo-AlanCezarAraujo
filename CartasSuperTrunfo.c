#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis para guardar os atributos das cidades:
    int
        pontosTuristicos1,
        pontosTuristicos2;

    float
        area1,
        pib1,
        densidadePopulacional1,
        pibPerCapita1,
        area2,
        pib2,
        densidadePopulacional2,
        pibPerCapita2;
    
    // unasigned significa que a variável não aceitará valores negativos
    // o tipo long int é equivalente ao int, ocupando 4 bytes de memória e aceitando valores entre 0 e 4.294.967.295
    unsigned long int
        populacao1,
        populacao2;
    
    // Cadastro das Cartas:
    // Cadastro da Primeira Carta:
    printf("Preencha os dados da primeira cidade \n");
    printf("Informe a população: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área: \n");
    scanf("%f", &area1);

    // Cálculo e atribuição da densidade populacional da primeira carta:
    densidadePopulacional1 = populacao1 / area1;

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    // Cálculo e atribuição do PIB per Capita da primeira carta:
    pibPerCapita1 = pib1 / populacao1;

    printf("Informe quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da Segunda Carta:
    printf("Preencha os dados da segunda cidade \n");
    printf("Informe a população: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área: \n");
    scanf("%f", &area2);

    // Cálculo e atribuição da densidade populacional da segunda carta:
    densidadePopulacional1 = populacao2 / area2;

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    // Cálculo e atribuição do PIB per Capita da segunda carta:
    pibPerCapita1 = pib2 / populacao2;

    printf("Informe quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:

    printf("\n");
    printf("Muito bom! Vamos ver as suas cartas: \n\n");

    // Exibição da primeira carta:
    printf("1° Cidade \n");
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB: R$ %f \n", pib1);
    printf("PIB per Capita: R$ %f \n", pibPerCapita1);
    printf("Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("\n");

    // Exibição da segunda carta:
    printf("2° Cidade \n");
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB: R$ %f \n", pib2);
    printf("PIB per Capita: R$ %f \n", pibPerCapita2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("\n");

    return 0;
}
