//Se tiene el dni de un alumno y una nota correspondiente a su parcial.
//Requerir al usuario ingresar el dni del alumno. Evaluar si el dni ingresado es
//igual al que se tiene almacenado. Permitir ingresar un dni incorrecto hasta 3
//veces como máximo. Si el usuario ingresa el dni de manera correcta, mostrar
//en la consola la nota del alumno.
//Trabajar con las siguientes variables:
//int dni = 38632584;
//float nota = 7; i
//int dniIngresado = 0; i
//int intentos = 1;
//int ingresaCorrectamente = 0;

#include <stdio.h>

int main() {
    int dni = 38632584;
    float nota = 7;
    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    while (intentos <= 3 && ingresaCorrectamente == 0) {
        printf("Intento %d - Ingrese el DNI del alumno: ", intentos);
        scanf("%d", &dniIngresado);

        if (dniIngresado == dni) {
            ingresaCorrectamente = 1;
            printf("DNI correcto. La nota del alumno es: %.2f\n", nota);
        } else {
            printf("DNI incorrecto.\n");
            intentos++;
        }
    }

    if (ingresaCorrectamente == 0) {
        printf("Se han agotado los 3 intentos. Acceso denegado.\n");
    }

    return 0;
}