//Pedir al usuario que ingrese 10 números reales, validar que los mismos sean
//valores positivos, si el usuario ingresa un número negativo o nulo, pedir
//reingresar el número (repetir el ingreso de dicho número mientras el número
//no sea correcto). Informar al usuario la suma de los 10 números ingresados

#include <stdio.h>

int main() {
    float numero, suma = 0;
    int contador = 0;

    while (contador < 10) {
        printf("Ingrese un número positivo (%d de 10): ", contador + 1);
        scanf("%f", &numero);

        if (numero > 0) {
            suma += numero; //suma = suma + numero;
            contador++;
        } else {
            printf("Error: el número debe ser positivo. Intente de nuevo.\n");
        }
    }

    printf("La suma de los 10 números positivos ingresados es: %.2f\n", suma);
    return 0;
}