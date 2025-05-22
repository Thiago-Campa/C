//Realizar un programa que calcule el promedio de las notas de los parciales
//de un curso. Comenzar pidiendo al usuario la cantidad de alumnos del curso
//y la cantidad de parciales que se tomaron durante el cuatrimestre. Calcular el
//promedio de notas de los alumnos del curso. A medida que se ingresan las
//notas, validar que las mismas sean mayores que 0 (cero) y menores que 10,
//en caso contrario requerir el ingreso de dicha nota hasta que sea correcta.
//Mostrar el promedio de cada alumno a medida que se va calculando y por
//último, el promedio general del curso.

#include <stdio.h>

int main() {
    int alumnos, parciales;
    float nota, sumaAlumno, promedioAlumno, sumaGeneral = 0;

    // Pedir cantidad de alumnos
    printf("Ingrese la cantidad de alumnos del curso: ");
    scanf("%d", &alumnos);

    // Pedir cantidad de parciales
    printf("Ingrese la cantidad de parciales tomados: ");
    scanf("%d", &parciales);

    int i = 1;
    while (i <= alumnos) {
        printf("\nAlumno %d:\n", i);
        sumaAlumno = 0;

        int j = 1;
        while (j <= parciales) {
            do {
                printf("Ingrese la nota del parcial %d: ", j);
                scanf("%f", &nota);

                if (nota <= 0 || nota >= 10) {
                    printf("Error: la nota debe ser mayor que 0 y menor que 10.\n");
                }
            } while (nota <= 0 || nota >= 10);

            sumaAlumno += nota;
            j++; //incrementa 1 -> j + 1
        }

        promedioAlumno = sumaAlumno / parciales;
        printf("Promedio del alumno %d: %.2f\n", i, promedioAlumno);
        sumaGeneral += promedioAlumno;

        i++;
    }

    float promedioGeneral = sumaGeneral / alumnos;
    printf("\nPromedio general del curso: %.2f\n", promedioGeneral);

    return 0;
}