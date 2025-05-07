//Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el
//saldo sea mayor o igual que el importe a retirar

#include <stdio.h>

int main()
{
    float saldo, retiro, nuevoSaldo;

    printf("Ingrese el saldo actual de la cuenta: ");
    scanf("%f", &saldo);

    printf("Ingrese el importe a retirar: ");
    scanf("%f", &retiro);

    if (saldo >= retiro) {
        nuevoSaldo = saldo - retiro;
        printf("\nRetiro exitoso.\n");
        printf("Nuevo saldo: %.2f\n", nuevoSaldo);
    } else {
        printf("\nSaldo insuficiente para realizar el retiro.\n");
        printf("Saldo actual: %.2f\n", saldo);
    }

    system("pause");

    return 0;
}