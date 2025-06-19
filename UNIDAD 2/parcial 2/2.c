#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Función para buscar un profesor por nombre
int buscaProfesor(char nombres[4][50], char buscado[])
{
    for (int i = 0; i < 4; i++) {
        if (strcmp(nombres[i], buscado) == 0) {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    char nombres[4][50];
    int horas[4][5];  // 4 profesores, 5 días (lunes a viernes)
    char dias[5][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};
    float valorHora;
    int i, j;

    // 1) Ingresar el valor de la hora
    do {
        printf("Ingrese el valor de la hora de clase: ");
        scanf("%f", &valorHora);
    } while (valorHora <= 0);

    // 2) Ingreso de nombres y horas trabajadas
    for (i = 0; i < 4; i++) {
        printf("\nIngrese el nombre del profesor %d: ", i + 1);
        scanf("%s", nombres[i]);

        for (j = 0; j < 5; j++) {
            do {
                printf("Horas trabajadas el %s: ", dias[j]);
                scanf("%d", &horas[i][j]);
            } while (horas[i][j] < 0 || horas[i][j] > 24);
        }
    }

    // 3) Menú
    int opcion;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Mostrar importes a cobrar por cada profesor\n");
        printf("2. Mostrar el profesor con más horas el viernes\n");
        printf("3. Mostrar datos de un profesor\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\nImportes a cobrar:\n");
            for (i = 0; i < 4; i++) {
                int totalHoras = 0;
                for (j = 0; j < 5; j++) {
                    totalHoras += horas[i][j];
                }
                float importe = totalHoras * valorHora;
                printf("%s: $%.2f\n", nombres[i], importe);
            }
        } else if (opcion == 2) {
            int maxHoras = -1;
            int posMax = -1;
            for (i = 0; i < 4; i++) {
                if (horas[i][4] > maxHoras) { // viernes = índice 4
                    maxHoras = horas[i][4];
                    posMax = i;
                }
            }
            printf("El profesor que más trabajó el viernes es: %s (%d horas)\n", nombres[posMax], maxHoras);
        } else if (opcion == 3) {
            char buscado[50];
            printf("Ingrese el nombre del profesor: ");
            scanf("%s", buscado);
            int pos = buscaProfesor(nombres, buscado);
            if (pos != -1) {
                printf("Horas trabajadas por %s:\n", nombres[pos]);
                for (j = 0; j < 5; j++) {
                    printf("%s: %d horas\n", dias[j], horas[pos][j]);
                }
            } else {
                printf("Nombre inexistente.\n");
            }
        } else if (opcion == 4) {
            printf("Saliendo del programa...\n");
        } else {
            printf("Opción inválida.\n");
        }

    } while (opcion != 4);

    system("pause");
    return 0;
}
