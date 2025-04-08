#include <stdio.h>

int main(){
    
    int m;
    printf("Ingrese la magnitud del vector: ");
    scanf("%d", &m);

    int vector[m]={};
    
    printf("ELEMENTOS DEL VECTOR\n");
    for(int i = 0; i<m; i++){
        printf("Elemento %d: ", i); 
        scanf("%d", &vector[i]);
    }
    
    printf("ELEMENTOS ORIGINALES DEL VECTOR\n");
    for(int i = 0; i<m; i++){
        printf("Elemento %d: %d\n", i, vector[i]); 
    }
    
    int aux=0;
    //Intercambio de posiciones 
    for(int i=m; i<m/2; i++){
            aux=vector[i];
            vector[i] = vector[m - i - 1];
            vector[5 - i - 1] = aux;
    }
    
    printf("ELEMENTOS INTERCAMBIADOS DEL VECTOR\n");
    for(int i = 0; i<m; i++){
        printf("Elemento %d: %d\n", i, vector[i]); 
    }

    return 0;
}
