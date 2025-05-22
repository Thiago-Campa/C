//#include <stdio.h>

int main() {
    int alumno, parcial;
    float nota, sumaAlumno, sumaGeneral = 0;
    float promedioAlumno, promedioGeneral;

    for (alumno = 1; alumno <= 5; alumno++) {
        sumaAlumno = 0;

        for (parcial = 1; parcial <= 3; parcial++) {
            do {
                printf("Ingrese la calificación %d del alumno %d (mayor que 0 y menor o igual a 10): ", parcial, alumno);
                scanf("%f", &nota);

                if (nota <= 0 || nota > 10) {
                    printf("Calificación inválida. Intente nuevamente.\n");
                }
            } while (nota <= 0 || nota > 10);

            sumaAlumno += nota;
        }

        promedioAlumno = sumaAlumno / 3;
        printf("Promedio del alumno %d: %.2f\n\n", alumno, promedioAlumno);
        sumaGeneral += promedioAlumno;
    }

    promedioGeneral = sumaGeneral / 5;
    printf("Promedio general del curso: %.2f\n", promedioGeneral);

    return 0;
}
