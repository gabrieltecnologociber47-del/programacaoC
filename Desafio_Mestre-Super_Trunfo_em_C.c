#include <stdio.h>
#include <string.h>

int main (){
    
    // Definindo variáveis

     // Carta 1
    char estado1 = 'A';
    char codigo_carta1[4] = "A01";
    char nome_cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int numero_pontos_turisticos1 = 50;
    float densidade1 = 8102.47; // População divido pela área
    float pib_per_capita1 = 56724.32; // Divida o pib da cidade pela população
    float SuperPoder1;
    
    // Carta 2
    char estado2 = 'B';
    char codigo_carta2[4] = "B02";
    char nome_cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int numero_pontos_turisticos2 = 30;
    float densidade2 = 5622.24; // População divido pela área
    float pib_per_capita2 = 44532.91; // Divida o pib da cidade pela população
    float SuperPoder2;

     // Carta 1
    printf("---[Apresentando | Carta 1]\n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo_carta1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: R$%.2f\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita1);
    printf("Superpoder: %.2f\n",SuperPoder1);

    densidade1 = populacao1 / area1; //populacao dividido pela area
    pib_per_capita1 = (float) pib1 / populacao1; // pib divido pela população

    printf("densidade populacional (Atributo especial quanto menor maior o poder!!): %f habitantes por quilometro quadrado\n", densidade1);
    printf("Pib per capita: %f\n\n", pib_per_capita1);

     //super poder soma de todos atributos e o inverso da densidade populacional
    SuperPoder1 = populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 +( area1 / populacao1);
    printf("O poder %s e : %f\n\n", nome_cidade1 ,SuperPoder1);
    


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
    printf("Superpoder: %.2f\n",SuperPoder2);

    printf("\n");

    densidade2 = populacao2 / area2; //populacao dividido pela area
    pib_per_capita2 = (float) pib2 / populacao2; // pib divido pela população
             
    printf("densidade populacional (Atributo especial quanto menor maior o poder!!): %f  habitantes por quilometro quadrado\n", densidade2);
    printf("Pib per capita: %f\n\n", pib_per_capita2);

     //super poder soma de todos atributos e o inverso da densidade populacional
    SuperPoder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + ( area2 / populacao2);
    printf("O poder da %s : %f\n\n", nome_cidade2 ,SuperPoder2);

    printf(" ***Chegou a grande hora, a hora da batalha! Vamos comparar os atributos lembre-se 1 e verdadeiro e 0 e falso ***\n");
    printf("A carta 1: %s ganhou a cidade 2: %s no numero de populacao? %d \n\n", nome_cidade1, nome_cidade2, (populacao1 > populacao2));

    printf("A carta 1: %s ganhou a cidade 2: %s no numero de area? %d \n\n", nome_cidade1, nome_cidade2, (area1 > area2));

    printf("A carta 1: %s ganhou a cidade 2: %s no numero do pib? %d \n\n", nome_cidade1, nome_cidade2, (pib1 > pib2));

    printf("A carta 1: %s ganhou a cidade 2: %s no numero de pontos turisticos? %d \n\n", nome_cidade1, nome_cidade2, (numero_pontos_turisticos1 > numero_pontos_turisticos2));

    printf("Agora vamos calcular a densidade populacional! lembre-se a menor densidade populacional \n");
    printf("A carta 1: %s tem uma menor densidade populacional que a cidade 2: %s? %d \n\n", nome_cidade1, nome_cidade2, (densidade1 < densidade2));

    printf("A carta 1: %s ganhou a cidade 2: %s no pib per capita? %d \n\n", nome_cidade1, nome_cidade2, (pib_per_capita1 > pib_per_capita2));

    printf("Agora vamos o super poder que e a soma de todos atributos + o inverso da densidade populacional! \n");

    
    printf("O super poder da cidade 1: %s, e maior que a cidade o super poder da cidade 2: %s? %d", nome_cidade1, nome_cidade2, (SuperPoder1 > SuperPoder2));

    printf("\n");

   return 0;

}