#include <stdio.h>

int main() {
    int f1, c1, f2, c2;

VID:
    printf("MATRIZ 1\n");
    printf("Numero de filas: "); scanf("%d", &f1);
    printf("Numero de columnas: "); scanf("%d", &c1);
    int m1[f1][c1];

    printf("\nMATRIZ 2\n");
    printf("Numero de filas: "); scanf("%d", &f2);
    printf("Numero de columnas: "); scanf("%d", &c2);
    int m2[f2][c2];

    if (c1 != f2) {
        printf("Las dimensiones de las matrices no son correctas para multiplicar. Intenta de nuevo.\n\n");
        goto VID;
    }

    // Lectura de elementos para m1
    printf("\nIngrese los elementos de la MATRIZ 1:\n");
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Lectura de elementos para m2
    printf("\nIngrese los elementos de la MATRIZ 2:\n");
    for (int i = 0; i < f2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Resultado de la multiplicación
    int resultado[f1][c2];

    // Inicializar la matriz resultado en 0
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c2; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicación de matrices
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                resultado[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Mostrar resultado
    printf("\nResultado de la multiplicacion:\n");
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
