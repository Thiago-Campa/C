//La empresa System SRL cuenta con 5 departamentos donde se realizan
//diferentes actividades (A saber: marketing, comercial, soporte técnico, administrativo y finanzas).
//Para cada uno de los departamentos se conoce el número de empleados X (se ingresa).
//Se tiene por otro lado, por cada uno de los empleados dentro deldepartamento
//la cantidad de horas trabajadas y el código de turno de trabajo (“M”: Mañana, “T”: tarde).
//Se deberá mostrar:
//● La cantidad de horas trabajadas en cada departamento.
//● La cantidad de horas trabajadas en turno tarde y turno mañana de toda la empresa.

#include <stdio.h>

int main() {
    const int DEPARTAMENTOS = 5;
    char *nombresDepartamentos[5] = {"Marketing", "Comercial", "Soporte Técnico", "Administrativo", "Finanzas"};
    int empleados, i, j;
    int horasTrabajadasDepto;
    int horasTurnoM = 0, horasTurnoT = 0;

    for (i = 0; i < DEPARTAMENTOS; i++) {
        printf("Ingrese la cantidad de empleados en el departamento %s: ", nombresDepartamentos[i]);
        scanf("%d", &empleados);

        horasTrabajadasDepto = 0;

        for (j = 0; j < empleados; j++) {
            int horas;
            char turno;

            printf("Empleado %d - Ingrese horas trabajadas: ", j + 1);
            scanf("%d", &horas);

            do {
                printf("Empleado %d - Ingrese código de turno (M para mañana, T para tarde): ", j + 1);
                scanf(" %c", &turno);  // espacio antes de %c para limpiar buffer
                if (turno != 'M' && turno != 'T' && turno != 'm' && turno != 't') {
                    printf("Código de turno inválido. Intente de nuevo.\n");
                }
            } while (turno != 'M' && turno != 'T' && turno != 'm' && turno != 't');

            horasTrabajadasDepto += horas;

            // Sumar horas a turno correspondiente (sin distinguir mayúsculas/minúsculas)
            if (turno == 'M' || turno == 'm') {
                horasTurnoM += horas;
            } else {
                horasTurnoT += horas;
            }
        }

        printf("Total de horas trabajadas en %s: %d\n\n", nombresDepartamentos[i], horasTrabajadasDepto);
    }

    printf("Horas trabajadas en turno mañana en toda la empresa: %d\n", horasTurnoM);
    printf("Horas trabajadas en turno tarde en toda la empresa: %d\n", horasTurnoT);

    return 0;
}
