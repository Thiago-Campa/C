//- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
//pantalla. Informar también si los números son iguales.

#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("\nEl número mayor es: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("\nEl número mayor es: %.2f\n", num2);
    } else {
        printf("\nAmbos números son iguales.\n");
    }

    system("pause");

    return 0;
}