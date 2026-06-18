#include <stdio.h>
// Inicialização Simplificada de Matrizes.
//int matriz[3][3] =
//{1, 2, 3},
//{4, 5, 6},
//{7, 8, 9}
 
int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    // Acessando e imprimindo elementos específicos da matriz
    printf("O elemento na posição [0][1] é %d\n", matriz[0][1]);
    printf("O elemento na posição [1][2] é %d\n", matriz[1][2]);
    printf("O elemento na posição [2][1] é %d\n", matriz[2][1]);
 
    return 0;
}