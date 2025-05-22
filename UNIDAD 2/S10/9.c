//Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 9; i++) {
        printf("Tabla de multiplicar del %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  // Línea en blanco para separar tablas
    }

    return 0;
}
