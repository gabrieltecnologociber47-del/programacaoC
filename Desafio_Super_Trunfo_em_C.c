#include <stdio.h>

int main (){


     // Carta 1
    char estado = 'A';
    char codigo_carta[4] = "A01";
    char nome_cidade[50] = "Sao Paulo";
    int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int numero_pontos_turisticos = 50;
    float densidade = 8102.47;
    float pib_per_capita = 56724.32;
    
    // Carta 2
    char estado2 = 'B';
    char codigo_carta2[4] = "B02";
    char nome_cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int numero_pontos_turisticos2 = 30;
    float densidade2 = 5622.24;
    float pib_per_capita2 = 44532.91;

     // Carta 1
    printf("---[Apresentando | Carta 1]\n");
    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n",codigo_carta);
    printf("Nome da Cidade: %s\n",nome_cidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %.2f km²\n",area);
    printf("PIB: R$%.2f\n",pib);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita);

    printf("\n");

    //Carta 2
    printf("---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo_carta2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: R$%.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita2);

}