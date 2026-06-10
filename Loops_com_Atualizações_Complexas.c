#include <stdio.h>

int main (){

    // Operador ternário
    for (int i = 0; 
        i < 100; 
        i += (i % 2 == 0) ? 1 : 2)
    {
        printf("i = %d\n", i);
    }
    
    return 0;
}