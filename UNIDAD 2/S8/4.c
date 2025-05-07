//Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.

#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("\nEl número mayor es: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("\nEl número mayor es: %.2f\n", num2);
    } else {
        printf("\nEl número mayor es: %.2f\n", num3);
    }

    system("pause");
    
    return 0;
}