#include <stdio.h>
 
void recursivo(int numero){
    if (numero > 0) {
        printf("%d\n", numero);
        recursivo(numero - 1);
        printf("%d\n", numero);
    }
    
}

int main(){

    int quantidade = 50;
    printf("Contagem regressiva...\n");
    recursivo(quantidade);
    

    return 0;
}