#include <stdio.h>
 
int main() {
    int vector[5] = {1, 2, 3, 4, 5}; // Inicialización del vector
    int temp;
    
    
    //Ingresar valores
    // Invertir los elementos del vector
    for(int i = 0; i < 5 / 2; i++) {
        temp = vector[i];
        vector[i] = vector[5 - i - 1];
        vector[5 - i - 1] = temp;
    }
 
    // Imprimir el vector invertido
    printf("El vector invertido es: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
