/*En un instituto de idiomas trabajan 4 profesores, los cuales dan clases 
todos los días hábiles de la semana en distintos turnos.

El Instituto quiere saber:

            -El importe que debe cobrar cada profesor por dicho trabajo.
            -El nombre del profesor que más trabajó el día viernes.
            -La cantidad total de horas trabajadas por un profesor.
    
    solicitar al usuario que cargue por pantalla:
        -Un único importe por hora de clase. (No puede ser 0 o negativo)
        -El nombre y las horas de clase dictadas por cada profesor en cada día de la semana.
        -Luego de la carga, se debe presentar al usuario el siguiente menú:
            1-Mostrar importes a cobrar por cada profesor
            2-Mostrar nombre del profesor con más horas el viernes
            3-Mostrar datos de un profesor
            4-Salir

Consignas:
-Utilizar un arreglo bidimensional (una fila para cada profesor y una columna para cada día de la semana).

-Utilizar un arreglo de cadenas para los nombres.

-Diseñar funciones (void) tanto para la carga de datos como para cada opción del menú.

-La opción 1 debe mostrar en la consola el nombre de los profesores junto con el importe a cobrar.

-La opción 2 debe mostrar en la consola el nombre del profesor que más trabajó el viernes.
-La opción 3 debe solicitar al usuario ingresar un nombre y mostrar la cantidad de 
horas trabajadas por dicho profesor en cada día, o mostrar el mensaje "Nombre inexistente" 
si el nombre no se encuentra en el arreglo. Para esta opción diseñar una función llamada buscarProfesor 
que reciba por parámetro el nombre del profesor a buscar y devuelva la posición en dónde se encuentra 
dicho profesor, o -1 si no se encuentra el nombre en el arreglo.

-El menú se debe presentar al usuario mientras no ingrese la opción para salir.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargarDatos(float horas[4][5], char nombres[4][30]) {
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("Ingrese el nombre del profesor %d: ", i + 1);
        scanf("%s", nombres[i]);

        for (j = 0; j < 5; j++) {
            printf("Ingrese las horas trabajadas el dia %d (1=Lunes...5=Viernes): ", j + 1);
            scanf("%f", &horas[i][j]);
        }
    }
}

void mostrarImportes(float horas[4][5], char nombres[4][30], float valorHora) {
    int i, j;
    float total, importe;

    printf("\nImportes por profesor:\n");

    for (i = 0; i < 4; i++) {
        total = 0;
        for (j = 0; j < 5; j++) {
            total += horas[i][j];
        }
        importe = total * valorHora;
        printf("%s cobra: $%.2f\n", nombres[i], importe);
    }
}

void mostrarMasTrabajoViernes(float horas[4][5], char nombres[4][30]) {
    int i, maxIndex = 0;
    float maxHoras = horas[0][4]; // viernes es columna 4

    for (i = 1; i < 4; i++) {
        if (horas[i][4] > maxHoras) {
            maxHoras = horas[i][4];
            maxIndex = i;
        }
    }

    printf("El profesor que más trabajó el viernes es: %s (%.2f horas)\n", nombres[maxIndex], maxHoras);
}

void mostrarHorasPorProfesor(float horas[4][5], char nombres[4][30]) {
    char nombreBuscado[30];
    int i, j, encontrado = 0;

    printf("Ingrese el nombre del profesor: ");
    scanf("%s", nombreBuscado);

    for (i = 0; i < 4; i++) {
        if (strcmp(nombreBuscado, nombres[i]) == 0) {
            printf("Horas trabajadas por %s:\n", nombres[i]);
            for (j = 0; j < 5; j++) {
                printf("Dia %d: %.2f horas\n", j + 1, horas[i][j]);
            }
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Nombre inexistente\n");
    }
}


int main(void)
{
    float horas[4][5];
    char nombres[4][30];
    float valorHora;
    int opcion;

    do {
        printf("Ingrese el valor por hora de clase: ");
        scanf("%f", &valorHora);
    } while (valorHora <= 0);

    cargarDatos(horas, nombres);

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Mostrar importes a cobrar por cada profesor\n");
        printf("2 - Mostrar nombre del profesor con más horas el viernes\n");
        printf("3 - Mostrar datos de un profesor\n");
        printf("4 - Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                mostrarImportes(horas, nombres, valorHora);
                break;
            case 2:
                mostrarMasTrabajoViernes(horas, nombres);
                break;
            case 3:
                mostrarHorasPorProfesor(horas, nombres);
                break;
            case 4:
                printf("Fin del programa.\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 4);

    ssytem("pasue"); 
    return 0;
}