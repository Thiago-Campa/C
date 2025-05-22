//Realizar un programa que permita ver información a un cliente de un banco.
//Para ello el cliente deberá ingresar su usuario (número de DNI) y contraseña
//(número entero), validar que los datos ingresados sean correctos, se
//permitirá al cliente 3 intentos de ingreso de contraseña. Al loguarse
//correctamente presentar un menú con las siguientes opciones:
//1- Consultar saldo
//2- Consultar CBU
//3- 3- Salir
//Trabajar con las siguientes variables:
//int dni = 35654123;
//int pass = 1234;
//int saldo = 150000;
//int cbu = 986323456;
//int dniIngresado = 0;
//int passIngresado = 0;
//int intentos = 1;
//int ingresaCorrectamente = 0;

#include <stdio.h>

int main() {
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int opcion;

    // Pedir DNI
    printf("Ingrese su DNI: ");
    scanf("%d", &dniIngresado);

    if (dniIngresado == dni) {
        // Intentos para contraseña
        while (intentos <= 3 && ingresaCorrectamente == 0) {
            printf("Ingrese su contraseña (intento %d de 3): ", intentos);
            scanf("%d", &passIngresado);

            if (passIngresado == pass) {
                ingresaCorrectamente = 1;
            } else {
                printf("Contraseña incorrecta.\n");
                intentos++;
            }
        }
    } else {
        printf("DNI incorrecto.\n");
    }

    if (ingresaCorrectamente == 1) {
        // Mostrar menú mientras no elija salir
        do {
            printf("\n--- MENÚ ---\n");
            printf("1 - Consultar saldo\n");
            printf("2 - Consultar CBU\n");
            printf("3 - Salir\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcion);

            switch (opcion) {
                case 1:
                    printf("Su saldo es: $%d\n", saldo);
                    break;
                case 2:
                    printf("Su CBU es: %d\n", cbu);
                    break;
                case 3:
                    printf("Gracias por usar el sistema. ¡Hasta luego!\n");
                    break;
                default:
                    printf("Opción inválida, intente de nuevo.\n");
            }
        } while (opcion != 3);

    } else if (dniIngresado == dni) {
        printf("Se agotaron los 3 intentos. Acceso denegado.\n");
    }

    return 0;
}