#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarDNI(char dni[]) {
    int largo = strlen(dni); //Calcula cuantos caracteres tiene la cadena.

    if (largo < 7 || largo > 8) { //Verifica que tenga entre 7 y 8 digitos.
        printf("DNI inválido. Debe tener entre 7 y 8 dígitos.\n");
        return 0;
    }

    //Validar que todos los caracteres sean números.
    for (int j = 0; j < largo; j++) {
        if (dni[j] < '0' || dni[j] > '9') {
            printf("DNI inválido. Debe contener solo números.\n");
            return 0; //DNI inválido.
        }
    }

    //Validar que empiece con 5, 6 o entre 10 y 60.
    int dniNumero;
    sscanf(dni, "%d", &dniNumero);
    int inicio = dniNumero / 1000000;

    if (!(inicio == 5 || inicio == 6 || (inicio >= 10 && inicio <= 60))) {
        printf("DNI inválido. Debe comenzar con 5, 6, o entre 10 y 60.\n");
        return 0;
    }
    return 1; //DNI válido.
}

int main(void)
{
    int n, i, j;

    int codigosDestinos;
    char codigosDestinosTexto[4][4] = {"BRA", "MDQ", "MZA", "BRC"}; //Codigo de los paises.
    char nombresDestinos[4][30] = {"Brasil", "Mar del Plata", "Mendoza", "Bariloche"}; //Nobre de las ciudades.
    float precios[4] = {25000.0, 14000.0, 19000.0, 23000.0}; //Precios de los viajes.
    int capacidades[4] = {0, 0, 0, 0}; //Contador por destino.

    char codigo[240][4]; //Guarda el codigo del destino, cada pasajero tiene su propio codigo.
    char dni[240][10]; //Guarda el DNI como cadenad de texto, para validarlo por caracter.
    char apellido[240][50]; //Guarda el apellido de cada pasajero.
    char nombre[240][50]; //Guarda el nombre de cada pasajero.
    int edad[240]; ////Guarda la edad de cada pasajero.
    int pagaTarjeta[240]; ////Indica si el pasajero pagó con tarjeta.
    float importeFinal[240]; //Importe final que debe pagar c/pasajero. Se calcula con base, edad y si paga con tarjeta.

    //Cargar cantidad de pasajero.
    do
    {
        printf("Ingrese la cantidad de pasajeros a cargar: ");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("Ingrese una cantidad valida.\n");
        }
    } while (n <= 0); //Valida que sea una cantidad valida.

    for (i = 0; i < n; i++)
    {
        printf("\n Cargar datos del pasajero: %d\n", i + 1);

        int destinoValido = -1; //Significa que todavía no se ingresó un destino correcto. (cuando es valido deja de valer -1, lo que permite salir del while.)

        do
        {
            printf("ingrese el codigo de su destino: \n");
            printf("1- BRA\n");
            printf("2- MDQ\n");
            printf("3- MZA\n");
            printf("4- BRC\n");
            scanf("%d", &codigosDestinos);
        } while (codigosDestinos < 1 || codigosDestinos > 4); //Valida que el destino sea valido.

        if (capacidades[codigosDestinos - 1] < 60) //Valida que haya capacidad en el viaje.
        {
            strcpy(codigo[i], codigosDestinosTexto[codigosDestinos - 1]);
            capacidades[codigosDestinos - 1]++;
        }
        else
        {
            printf("Ese destino ya alcanzó el máximo de 60 pasajeros. Elija otro.\n");
            i--;      //Para que repita este pasajero
            continue; //Volver a intentar
        }

        //-------------------Cargar DNI----------------------------
        do
        {
            printf("Ingrese el DNI: ");
            scanf("%s", dni[i]);
        } while (!validarDNI(dni[i]));

        //-------------------Cargar APELLIDO-----------------------
        printf("Ingrese el apellido: ");
        scanf("%s", apellido[i]);

        //-------------------Cargar NOMBRE-------------------------
        printf("Ingrese el nombre: ");
        scanf("%s", nombre[i]);

        //-------------------Cargar EDAD---------------------------
        do
        {
            printf("Ingrese la edad: ");
            scanf("%d", &edad[i]);
        } while (edad[i] < 0);

        if (edad[i] < 5)
        {
            importeFinal[i] = 2000.0; //Si el pasajero es menor a 5 solo paga el seguro.
        }
        else
        {
            float base = precios[destinoValido]; //Se guarda el precio del viaje ya definidos al principio.
            if (pagaTarjeta[i] == 1)
            {
                importeFinal[i] = base * 1.05; //Si se paga con tarjeta, tiene un 5% de recargo.
            }
            else
            {
                importeFinal[i] = base; //No hay recargo, solo se paga el precio base.
            }
        }

        do
        {
            printf("¿Paga con tarjeta? (1-Si / 0-No): ");
            scanf("%d", &pagaTarjeta[i]);

            if (pagaTarjeta[i] < 0 || pagaTarjeta[i] > 1)
            {
                printf("Ingrese una opcion valida.\n");
            }
        } while (pagaTarjeta[i] < 0 || pagaTarjeta[i] > 1);
    }

    int opcion;
    do
    {
        printf("Ingrese una opcion: \n");
        printf("1- Mostrar lista ordenada por Apellido y Nombre\n");
        printf("2- Mostrar lista ordenada por Destino y Apellido-Nombre\n");
        printf("3- Mostrar lista de Destinos\n");
        printf("4- Buscar por DNI\n");
        printf("5- Mostrar estadísticas\n");
        printf("6- Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        /*switch (opcion)
        {
        case 1:
            // Ordenar por apellido y nombre
            for (i = 0; i < n - 1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (strcmp(apellido[i], apellido[j]) > 0 ||
                        (strcmp(apellido[i], apellido[j]) == 0 && strcmp(nombre[i], nombre[j]) > 0))
                    {
                        char aux[50];
                        strcpy(aux, apellido[i]);
                        strcpy(apellido[i], apellido[j]);
                        strcpy(apellido[j], aux);
                        strcpy(aux, nombre[i]);
                        strcpy(nombre[i], nombre[j]);
                        strcpy(nombre[j], aux);
                        strcpy(aux, dni[i]);
                        strcpy(dni[i], dni[j]);
                        strcpy(dni[j], aux);
                        strcpy(aux, codigo[i]);
                        strcpy(codigo[i], codigo[j]);
                        strcpy(codigo[j], aux);
                        int auxEdad = edad[i];
                        edad[i] = edad[j];
                        edad[j] = auxEdad;
                        int auxPago = pagaTarjeta[i];
                        pagaTarjeta[i] = pagaTarjeta[j];
                        pagaTarjeta[j] = auxPago;
                        float auxImporte = importeFinal[i];
                        importeFinal[i] = importeFinal[j];
                        importeFinal[j] = auxImporte;
                    }
                }
            }

            printf("\n--- Lista de Pasajeros por Apellido ---\n");
            for (i = 0; i < n; i++)
            {
                printf("%s %s - DNI: %s - Edad: %d - Destino: %s - $%.2f\n",
                    apellido[i], nombre[i], dni[i], edad[i], codigo[i], importeFinal[i]);
            }
            break;

        case 2:
            // Ordenar por destino y apellido
            for (i = 0; i < n - 1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (strcmp(codigo[i], codigo[j]) > 0 ||
                        (strcmp(codigo[i], codigo[j]) == 0 && strcmp(apellido[i], apellido[j]) > 0))
                    {
                        char aux[50];
                        strcpy(aux, apellido[i]);
                        strcpy(apellido[i], apellido[j]);
                        strcpy(apellido[j], aux);
                        strcpy(aux, nombre[i]);
                        strcpy(nombre[i], nombre[j]);
                        strcpy(nombre[j], aux);
                        strcpy(aux, dni[i]);
                        strcpy(dni[i], dni[j]);
                        strcpy(dni[j], aux);
                        strcpy(aux, codigo[i]);
                        strcpy(codigo[i], codigo[j]);
                        strcpy(codigo[j], aux);
                        int auxEdad = edad[i];
                        edad[i] = edad[j];
                        edad[j] = auxEdad;
                        int auxPago = pagaTarjeta[i];
                        pagaTarjeta[i] = pagaTarjeta[j];
                        pagaTarjeta[j] = auxPago;
                        float auxImporte = importeFinal[i];
                        importeFinal[i] = importeFinal[j];
                        importeFinal[j] = auxImporte;
                    }
                }
            }

            printf("\n--- Lista por Destino y Apellido ---\n");
            for (i = 0; i < n; i++)
            {
                printf("%s %s - DNI: %s - Edad: %d - Destino: %s - $%.2f\n",
                    apellido[i], nombre[i], dni[i], edad[i], codigo[i], importeFinal[i]);
            }
            break;

        case 3:
            printf("\n--- Lista de Destinos ---\n");
            for (i = 0; i < 4; i++)
            {
                printf("%s - %s - Precio: $%.2f - Pasajeros: %d/60\n",
                    codigosDestinosTexto[i], nombresDestinos[i], precios[i], capacidades[i]);
            }
            break;

        case 4:
        {
            char buscarDNI[10];
            printf("Ingrese el DNI a buscar: ");
            scanf("%s", buscarDNI);

            int encontrado = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(dni[i], buscarDNI) == 0)
                {
                    printf("Pasajero encontrado: %s %s - Destino: %s - Edad: %d - $%.2f\n",
                        apellido[i], nombre[i], codigo[i], edad[i], importeFinal[i]);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
            {
                printf("No se encontró ese DNI.\n");
            }
        }
        break;

        case 5:
        {
            int menores = 0, conTarjeta = 0;
            float totalRecaudado = 0;
            for (i = 0; i < n; i++)
            {
                if (edad[i] < 5)
                    menores++;
                if (pagaTarjeta[i] == 1)
                    conTarjeta++;
                totalRecaudado += importeFinal[i];
            }

            printf("\n--- Estadísticas ---\n");
            printf("Total pasajeros: %d\n", n);
            printf("Menores de 5 años: %d\n", menores);
            printf("Pagaron con tarjeta: %d\n", conTarjeta);
            printf("Total recaudado: $%.2f\n", totalRecaudado);
        }
        break;

        case 6:
            printf("Saliendo del sistema...\n");
            break;

        default:
            printf("Opción inválida. Intente de nuevo.\n");
        } */
    } while (opcion != 6); //Mientras la opcion sea distina a 6, el programa continua.

    system("pause");
    return 0;
}