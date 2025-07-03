/*
    En una empresa de mantenimiento trabajan 4 técnicos que realizan reparaciones durante los
    días hábiles de la semana (lunes a viernes).

    La empresa quiere saber:

            -La cantidad total de equipos reparados por cada técnico en la semana.
            -El nombre del técnico que más equipos reparó el miércoles.
            -El detalle de reparaciones por día para un técnico específico.

    Solicitar al usuario que cargue por pantalla:
    1)El nombre de cada técnico.
    2)La cantidad de equipos reparados por cada técnico en cada día de la semana (lunes a viernes).

    Luego de la carga, mostrar un menú con las siguientes opciones:
    1-Mostrar el total de equipos reparados por cada técnico.
    2-Mostrar el nombre del técnico que más reparó el día miércoles.
    3-Mostrar el detalle diario de un técnico ingresando su nombre.
    4-Salir.

    Consignas:
        -Usar un arreglo bidimensional de enteros para guardar la cantidad de reparaciones 
        (técnicos x días).
        -Usar un arreglo de cadenas para almacenar los nombres.
        -Diseñar funciones void para cada una de las tareas del menú y para cargar los datos.

    Para la opción 3, si el nombre no se encuentra, mostrar el mensaje "Técnico no encontrado". */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    void cargarDatos(int reparaciones[4][5], char nombre[4][30]);
    void mostrarTotalEquipos(int reparaciones[4][5], char nombre[4][30]);
    void mostrarTenicoMiercoles(int reparaciones[4][5], char nombre[4][30]);
    void mostrarDetalleDiaro(int reparaciones[4][5], char nombre[4][30]);

    int main(void)
    {
        int reparaciones[4][5];
        char nombres[4][30];
        int opcion;

        cargarDatos(reparaciones, nombres);

        do
        {
            printf("ingrese una opcion: ");
            printf("1-Mostrar el total de equipos reparados por cada técnico");
            printf("2-Mostrar el nombre del técnico que más reparó el día miércoles");
            printf("3-Mostrar el detalle diario de un técnico ingresando su nombre");
            printf("4-Salir");
            scanf("%d", &opcion);
        }while(opcion < 1 || opcion > 4);

        switch (opcion)
        {
        case 1:
        void mostrarTotalEquipos(int reparaciones[4][5], char nombre[4][30]);
            break;
        case 2:
        void mostrarTotalEquipos(int reparaciones[4][5], char nombre[4][30]);
            break;
        case 3:
        void mostrarDetalleDiaro(int reparaciones[4][5], char nombre[4][30]);
            break;
        case 4:
        printf("saliendo...\n");
            break;
        }
    }


    void cargarDatos(int reparaciones[4][5], char nombre[4][30])
    {
        int i, j;

        for(i=0; i<4; i++)
        {
            printf("ingrese el nombre del mecanico %d: ", i+1);
            scanf("%s", &nombre[i]);
            
            for(j=0; j<5; j++)
            {
                do
                {
                    printf("ingrese las reperaciones del dia %d: ", j+1);
                    scanf("%d", &reparaciones[i][j]);
                } while (reparaciones[i][j < 0]);
            }
        }
    }

    void mostrarTotalEquipos(int reparaciones[4][5], char nombre[4][30])
    {
        int total = 0, i, j;

        for(i=0; i<4; ++i)
        {
            for(j=0; j<5; j++)
            {
                total = total + reparaciones[i][j];
            }
        }

        printf("el mecanico %s reparo %d equipos: ", nombre[i], reparaciones[i][j]);
    }

    void mostrarTenicoMiercoles(int reparaciones[4][5], char nombre[4][30])
    {
        int mayor = reparaciones[0][2], indice = 0;

        for(int i=0; i<4; i++)
        {
            if(reparaciones[i][2] > mayor)
            {
                mayor = reparaciones[i][2];
                indice = i;
            }
        }

        printf("la mayor cantidad de raparaciones el dia miercoles fueron: %d", mayor);
        printf("corresponde a: %s", nombre[indice]);
    }


    void mostrarDetalleDiaro(int reparaciones[4][5], char nombre[4][30])
    {
        char nombreIngresado[30];
        int i, j, encontrado = 0;

        printf("ingrese el nombre del mecanico: ");
        scanf("%s", nombreIngresado[i]);

        if(strcmp(nombreIngresado, nombre[i]==0))
        {
            print("encontrado, nombre: %s", nombre[i]);
            for(j=0; j<5; j++)
            {
                printf("total de reparaciones: %d", reparaciones[i][j]);
            }
            encontrado = 1;
        }


        if(!encontrado)
        {
            printf("no se encontro al mecanico\n");
        }
    }