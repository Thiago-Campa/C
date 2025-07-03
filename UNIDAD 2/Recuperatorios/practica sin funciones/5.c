// Cargar las notas (float, del 1 al 10) de hasta 25 alumnos.
//  Finalizar con una nota negativa.
//  Mostrar la nota más alta, el promedio y cuántos aprobaron (nota >= 6).

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float alumnos[25];
    float nota, suma = 0, promedio, aprobados, notaAlta = 0;
    int i = 0, contador = 0;

    while (i < 25)
    {
        do
        {
            printf("ingrese la nota del alumno %d:", i + 1);
            scanf("%f", &nota);
        } while (nota > 10);

        if (nota < 0)
        {
            printf("saliendo del sistema...\n");
            break;
        }

        if (nota >= 0 && nota <= 10)
        {
            if (nota > notaAlta)
            {
                notaAlta = nota;
            }

            if(nota > notaAlta)
            {
                notaAlta = nota;
            }

            alumnos[i] = nota;
            suma = suma + nota;
            i++;
            contador++;
        }
    }

    if(contador > 0)
    {
        promedio = suma / contador;
    }

    printf("nota mas alta: %f\n", notaAlta);
    printf("promedio: %.2f\n", promedio);
    printf("aprobados: %d\n", aprobados);

    system("pause");
    return 0;
}