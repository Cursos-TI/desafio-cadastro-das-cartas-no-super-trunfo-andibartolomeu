#include <stdio.h>

struct Carta {
    char estado;                 
    char codigo[4];              
    char cidade[50];         
    unsigned long int populacao;
    float area;                   
    float pib;                    
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    printf("Carta 1 \n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);

    printf("Código: ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos +
                        carta1.pibPerCapita + (1.0 / carta1.densidadePopulacional);

    
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);

    printf("Código: ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos +
                        carta2.pibPerCapita + (1.0 / carta2.densidadePopulacional);

    
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (carta1.populacao > carta2.populacao) ? 1 : 2, (carta1.populacao > carta2.populacao));
    printf("Área: Carta %d venceu (%d)\n", (carta1.area > carta2.area) ? 1 : 2, (carta1.area > carta2.area));
    printf("PIB: Carta %d venceu (%d)\n", (carta1.pib > carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 2, (carta1.pontosTuristicos > carta2.pontosTuristicos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 2, (carta1.densidadePopulacional < carta2.densidadePopulacional));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 2, (carta1.pibPerCapita > carta2.pibPerCapita));
    printf("Super Poder: Carta %d venceu (%d)\n", (carta1.superPoder > carta2.superPoder) ? 1 : 2, (carta1.superPoder > carta2.superPoder));

    return 0;
}
