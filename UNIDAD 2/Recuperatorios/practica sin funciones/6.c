//cargar las notas (reales) de estudiantes en un arreglo, finalizando el ingreso cuando se 
//detecte una nota negatica o al alcanzar un maximo de 30 estudiantes. Validar que cada nota 
// sea mayor a 0 y menor o igual a 10. al finalizar, calcular y mostrar el promedio de las notas.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float alumnos[25];
    int i = 0, contador = 0;
    float nota, suma = 0, promedio;

    while(i<25)
    {
        do
        {
            printf("ingrese la nota del alumno %d: ", i+1);
            scanf("%f", &nota);
        } while (nota > 10);

        if(nota <= 0)
        {
            printf("saliendo del sistema...\n");
            break;
        }

        if(nota > 0 && nota <= 10)
        {
            alumnos[i] = nota;
            suma = suma + nota;
            contador++;
            i++;
        }
    }

    if(contador > 0)
    {
        promedio = suma / contador;
    }

    printf("promedio: %.2f\n", promedio);

    system("pause");
    return 0;
}