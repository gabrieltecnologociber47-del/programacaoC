#include <stdio.h>

int main (){


    int carta = 2;
    char estado = 'B';
    char código [20] = "B02";
    char cidade [40] = "Rio de Janeiro";
    int população = 6748000;
    float área = 1200.25;
    float PIB = 300.50;
    int pontosturísticos = 30;

    
    printf("A carta é: %d\n", carta);
    printf("O estado é: %c\n", estado);
    printf("O código é: %s\n", código);
    printf("O nome da cidade é : %s\n", cidade);
    printf("A população é: %d\n", população);
    printf("A área é: %.2f km²\n", área);
    printf("O PIB é: %.2f bilhões de reais\n", PIB);
    printf("Pontosturísticos é: %d", pontosturísticos);

    printf("\n");


    return 0;


}