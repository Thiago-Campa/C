//Escriba un programa que lea una matriz cuadrada, la muestre en pantalla y
//calcule la suma de todos los números que no están en la diagonal principal.

#include <stdio.h>

int main() {
    int n;
    
    printf("Ingrese el tamaño de la matriz cuadrada: ");
    scanf("%d", &n);

    int matriz[n][n];
    int suma_no_diagonal = 0;

    // Leer la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar la matriz
    printf("\nMatriz ingresada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcular suma de los elementos que NO están en la diagonal principal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {  // No es diagonal principal
                suma_no_diagonal += matriz[i][j];
            }
        }
    }

    printf("\nSuma de los elementos que NO están en la diagonal principal: %d\n", suma_no_diagonal);

    return 0;
}
