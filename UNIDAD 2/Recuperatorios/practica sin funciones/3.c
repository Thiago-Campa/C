// Cargar las alturas (en metros, tipo float) de hasta 25 personas.
// Finalizar cuando se ingresa una altura negativa. Validar que sea mayor a 0 y menor a 3.
// Al terminar, mostrar la altura máxima ingresada y cuántas personas miden más de 1.70 m.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float personas[25];
    int i = 0, alturaAlta = 0;
    int contador = 0;
    float alturaMaxima = 0;

    while (i < 25)
    {
        float altura;

        printf("ingrese la altura de la persona %d: ", i + 1);
        scanf("%f", &altura);

        if (altura < 0)
        {
            printf("saliendo...\n");
            break;
        }

        if (altura > 0 && altura <= 300)
        {
            contador++;

            if (altura > alturaMaxima)
            {
                alturaMaxima = altura;
            }

            if (altura > 170)
            {
                alturaAlta++;
            }
            i++;
        }
        else
        {
            printf("ingrese una altura valida.\n");
        }
    }

    printf("personas mayores a 170 cm: %d\n", alturaAlta);
    printf("mayor altura: %f\n", alturaMaxima);

    system("pause");
    return 0;
}