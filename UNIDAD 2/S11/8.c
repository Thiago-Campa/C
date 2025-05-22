//Leer 10 números por teclado: 5 para un array y 5 para otro array distinto.
//Mostrar los 10 números juntos en pantalla utilizando un solo array.

#include <stdio.h>

int main() {
    int A[5], B[5], C[10];

    // Leer 5 números para el array A
    printf("Ingrese 5 números para el primer array:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Leer 5 números para el array B
    printf("\nIngrese 5 números para el segundo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Copiar A y B en el array C
    for (int i = 0; i < 5; i++) {
        C[i] = A[i];         // primeros 5 del array A
        C[i + 5] = B[i];     // siguientes 5 del array B
    }

    // Mostrar los 10 números juntos desde C
    printf("\nLos 10 números ingresados son:\n");
    for (int i = 0; i < 10; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
