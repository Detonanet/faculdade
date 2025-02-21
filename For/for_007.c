#include <stdio.h>
 // Mostrando os numeros de 10 em 10 Decremento
int main() {
    for (int i = 500; i >= 0; i -= 10) {
        // O if e só para não mostrar o numero 0
        if (i != 0)
        {
            printf("%d\n", i);
        }
    }
   
    return 0;
}