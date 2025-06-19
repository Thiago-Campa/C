// Almacenar las alturas (reales en metros) de 25 estudiantes en un arreglo. Validar que las
// alturas estén entre 1.0 y 2.5 metros.
// Calcular:
// a. La altura promedio
// b. La mayor altura
// c. Cuántos estudiantes miden más de 1.70
// ● Usar una función para cargar y validar las alturas.
// ● Usar otra función para los cálculos estadísticos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, contador = 0, masAltos = 0, promedio;
    float altura, alturaMayor = 0, suma = 0;
    char opcion;

    for (i = 0; i < 25; i++)
    {
        do
        {
            printf("ingrese la altura del estudiante %d: ", i + 1);
            scanf("%f", &altura);


        } while (altura < 1.0 || altura > 2.5);

        if(altura >= 1 && altura <= 2.5)
        {
            contador++;
            suma += altura;

            if(altura > alturaMayor)
            {
                alturaMayor = altura;
            }

            if(altura > 1.70)
            {
                masAltos++;
            }
        }
    }

    promedio = suma / 25;

    printf("altura promedio: %f\n", promedio);
    printf("mayor altura: %f", alturaMayor);
    printf("estudiantes mayores a 1,70ms: %d\n", masAltos);

    system("pause");
    return 0;
}