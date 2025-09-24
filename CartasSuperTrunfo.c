#include <stdio.h>

int main(){
    int pontos1, pontos2;
    char estado1[2], codigo1[4], cidade1[50], estado2[2], codigo2[4], cidade2[50];
    float area1, pib1, area2, pib2, populacao1, populacao2, densidade1, densidade2, percapita1, percapita2;

    printf("Represente seu estado com uma letra de 'A' a 'H': ");
    scanf("%1s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade escolhida: ");
    scanf("%s", cidade1);

    printf("Qual a população da cidade escolhida? ");
    scanf("%f", &populacao1);

    printf("Qual a área da cidade em km: ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos a sua cidade tem? ");
    scanf("%d", &pontos1);

    printf("Agora vamos escolher a cidade 2\n");

    printf("Represente seu estado com uma letra de 'A' a 'H': ");
    scanf("%1s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade escolhida: ");
    scanf("%s", cidade2);

    printf("Qual a população da cidade escolhida? ");
    scanf("%f", &populacao2);

    printf("Qual a área da cidade em km: ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a sua cidade tem? ");
    scanf("%d", &pontos2);

densidade1 = (populacao1 / area1);
densidade2 = (populacao2 / area2);
percapita1 = (pib1 / populacao1);
percapita2 = (pib2 / populacao2);

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.f\n", populacao1);
    printf("Área: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Número de pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Pib per capita: %.3f\n", percapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("Pib per capita: %.3f\n", percapita2);

    int CompPopulacao = (populacao1 >= populacao2);
    int CompArea = (area1 >= area2);
    int CompPib = (pib1 >= pib2);
    int CompPontos = (pontos1 >= pontos2);
    int CompDens = (densidade1 <= densidade2);
    int CompPercapita = (percapita1 >= percapita2);

    printf("Comparação de cartas\n");
    printf("(Resultado 1 para cidade 1 ganhadora e resultado 0 para a cidade 2 ganhadora)\n");
    printf("População vencedora: %d\n", CompPopulacao);
    printf("Área vencedora: %d\n", CompArea);
    printf("PIB vencedor: %d\n", CompPib);
    printf("Números de pontos turisticos vencedor: %d\n", CompPontos);
    printf("Densidade populacional vencedora: %d\n", CompDens);
    printf("PIB per capita vencedora: %d\n", CompPercapita);
    


    return 0;






}
