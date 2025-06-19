// Se deben registrar los puntajes obtenidos (números enteros entre 0 y 100) por hasta 40
// alumnos en un examen.
// La carga finaliza si se ingresa un número fuera de rango o se completan los 40 alumnos.
// Calcular:
// a. El puntaje más alto
// b. Cuántos estudiantes aprobaron (puntaje >= 60)
// c. El promedio general
// d. El porcentaje de desaprobados

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, aprobados = 0, desaprobados = 0, contador = 0;
    float nota, notaMayor = 0, suma = 0, promedio, desaprobadosPorcentaje;
    char continuar;

    for(i = 0; i < 40; i++)
    {
        printf("Ingrese la nota del alumno %d (0 a 100): ", i + 1);
        scanf("%f", &nota);

        if(nota < 0 || nota > 100)
        {
            printf("¡Dato inválido! Saliendo...\n");
            break;
        }

        contador++;
        suma += nota;

        if(nota > notaMayor)
        {
            notaMayor = nota;
        }

        if(nota >= 60)
        {
            aprobados++;
        }
        else
        {
            desaprobados++;
        }

        // Preguntar si desea continuar
        printf("¿Desea continuar cargando notas? (s/n): ");
        scanf(" %c", &continuar);

        if(continuar == 'n' || continuar == 'N')
        {
            printf("Carga finalizada por el usuario.\n");
            break;
        }
    }

    if(contador > 0)
    {
        promedio = suma / contador;
        desaprobadosPorcentaje = desaprobados * 100.0 / contador;

        printf("\n--- RESULTADOS ---\n");
        printf("Cantidad de alumnos cargados: %d\n", contador);
        printf("Aprobados: %d\n", aprobados);
        printf("Desaprobados: %d\n", desaprobados);
        printf("Nota mayor: %.2f\n", notaMayor);
        printf("Promedio general: %.2f\n", promedio);
        printf("Porcentaje de desaprobados: %.2f%%\n", desaprobadosPorcentaje);
    }
    else
    {
        printf("No se ingresaron datos válidos.\n");
    }

    system("pause");
    return 0;
}