//Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.

#include <stdio.h>

int main() {
    int n1, i;

    printf("Ingrese un número para ver su tabla de multiplicar: ");
    scanf("%d", &n1);

    printf("Tabla de multiplicar del %d:\n", n1);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n1, i, n1 * i);
    }

    return 0;
}
