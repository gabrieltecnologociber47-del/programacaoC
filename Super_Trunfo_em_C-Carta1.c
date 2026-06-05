#include <stdio.h>

int main(){

    int carta = 1;
    char estado = 'A';
    char código [20] = "A01";
    char cidade [40] = "São Paulo";
    int população = 12325000;
    float área = 1521.11;
    float PIB = 699.28;
    int pontos = 50;

    printf("A carta é: %d\n", carta);
    printf("O estado é: %c\n", estado);
    printf("O código é: %s\n", código);
    printf("A cidade é : %s\n", cidade);
    printf("A população é: %d\n", população);
    printf("A área é: %.2f km²\n", área);
    printf("O PIB é: %.2f bilhões de reais\n", PIB);
    printf("Pontos é: %d", pontos);

    printf("\n");

    return 0;




}