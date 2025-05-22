//. Escriba un programa que lea 5 números por teclado, los copie a otro array
//multiplicados por 2 y muestre el segundo array.

#include <stdio.h>

int main() {
    int original[5], multiplicado[5];

    // Leer 5 números
    printf("Ingrese 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &original[i]);
    }

    // Copiar multiplicando por 2
    for (int i = 0; i < 5; i++) {
        multiplicado[i] = original[i] * 2;
    }

    // Mostrar el segundo array
    printf("\nArray multiplicado por 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", multiplicado[i]);
    }
    printf("\n");

    return 0;
}
