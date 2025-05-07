//Leer una nota de un alumno por consola e informar la condición del mismo.
//(menor que 4: Reprobado, menor que 6: Regular, mayor o igual que 6:
//Promocionado). Validar que la nota ingresada se encuentre entre el 0 y el 10, de
//lo contrario informar “Nota inválida”

#include <stdio.h>

int main() 
{
    float nota;

    printf("Ingrese la nota del alumno (entre 0 y 10): ");
    scanf("%f", &nota);


    if (nota < 0 || nota > 10) {
        printf("\nNota inválida.\n");
    } else {
        if (nota < 4) {
            printf("\nReprobado\n");
        } else if (nota < 6) {
            printf("\nRegular\n");
        } else {
            printf("\nPromocionado\n");
        }
    }

    system("pause");

    return 0;
}