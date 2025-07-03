//usar dos funciones distintas, una para los items a y b, y otra funcion para el c
//almacenar las notas(reales) de 10 estudiantes en un arreglo. caluclar y mostrar.
//a- mayor nota
//b- numero del estudiante con mayor nota
//c- promedio de notas

//validar que las notas sean menor o igual a 10 y mayor a 0.

#include <stdio.h>
#include <stdlib.h>

void mostrarMayorNotaYAlumno(float alumnos[], int cantidad)
{
    float mayor = alumnos[0];
    int alumno = 0;

    for(int i=0; i<cantidad; i++)
    {
        if(alumnos[i] > mayor)
        {
            mayor = alumnos[i];
            alumno = i;
        }
    }

    printf("la mayor nota es: %f", mayor);
    printf("la tiene el alumno: %d", alumno+1);
}

void mostarPromedio(float alumnos[], int cantidad)
{
    float suma = 0, promedio;
    float mayor = 0;

    for(int i=0; i<cantidad; i++)
    {
        suma = suma + alumnos[i];
    }

    promedio = suma / cantidad;

    printf("promedio: %.2f\n", promedio);
}

int main(void)
{
    float estudiantes[10];
    float nota;
    int i;

    for(i=0; i<10; i++)
    {
        do
        {
            printf("ingrese la nota del alumno %d: ", i+1);
            scanf("%f", &nota);
        } while (nota <= 0 || nota  >10);

        if(nota > 0 && nota <= 10)
        {
            estudiantes[i] = nota;
        }
    }

    mostrarMayorNotaYAlumno(estudiantes, 10);
    mostarPromedio(estudiantes, 10);

    system("pause");
    return 0;
}