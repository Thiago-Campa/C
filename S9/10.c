//Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
//Luego presentar el siguiente menú:
//1. Informar su suma
//2. Informar su resta
//3. Informar su multiplicación
//4. Informar su división
//5. Salir
//Seleccione una operación:
//Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la
//opción 5 el programa debe terminar.
//Luego modificar la solución de manera que el menú se muestre al usuario
//mientras este no se ingrese la opción 6, dado que se agrega una opción 5
//que muestra la cantidad de operaciones que realizó el usuario.
//El menú que se mostrará al usuario quedará entonces de la siguiente forma:
//1. Informar su suma
//2. Informar su resta
//3. Informar su multiplicación
//4. Informar su división
//5. Informar cantidad de operaciones realizadas
//6. Salir
//Seleccione una operación:

#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcion;

    printf("Ingrese el primer número (puede ser decimal): ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número (puede ser decimal): ");
    scanf("%f", &num2);

    do {
        printf("\nMenú:\n");
        printf("1. Informar su suma\n");
        printf("2. Informar su resta\n");
        printf("3. Informar su multiplicación\n");
        printf("4. Informar su división\n");
        printf("5. Salir\n");
        printf("Seleccione una operación: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                resultado = num1 + num2;
                printf("La suma es: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("La resta es: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("La multiplicación es: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("La división es: %.2f\n", resultado);
                } else {
                    printf("Error: División por cero no permitida.\n");
                }
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
