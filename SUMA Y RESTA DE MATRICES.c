#include <stdio.h>

int main() {
    int f1, c1, f2, c2;

VID:
    printf("MATRIZ 1\n");
    printf("Numero de filas: "); 
    scanf("%d", &f1);
    printf("Numero de columnas: "); 
    scanf("%d", &c1);

    printf("\nMATRIZ 2\n");
    printf("Numero de filas: "); 
    scanf("%d", &f2);
    printf("Numero de columnas: "); 
    scanf("%d", &c2);

    if (f1 != f2 || c1 != c2) {
        printf("\nLas dimensiones de las matrices deben ser iguales para suma y resta. Intenta nuevamente.\n\n");
        goto VID;
    }

    int m1[f1][c1], m2[f2][c2];
    int suma[f1][c1], resta[f1][c1];

    // Lectura de la MATRIZ 1
    printf("\nIngrese los elementos de la MATRIZ 1:\n");
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Lectura de la MATRIZ 2
    printf("\nIngrese los elementos de la MATRIZ 2:\n");
    for (int i = 0; i < f2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Calculo de la suma y la resta
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c1; j++) {
            suma[i][j] = m1[i][j] + m2[i][j];
            resta[i][j] = m1[i][j] - m2[i][j];
        }
    }

    // Mostrar resultados
    printf("\nSUMA DE MATRICES:\n");
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d\t", suma[i][j]);
        }
        printf("\n");
    }

    printf("\nRESTA DE MATRICES:\n");
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d\t", resta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
