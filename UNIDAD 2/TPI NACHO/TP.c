// PARTICIPANTES: GUZMAN IGNACIO LEONEL,

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarDNI(char dni[])
{
    int largo = strlen(dni); // Calcula cuantos caracteres tiene la cadena.

    if (largo < 7 || largo > 8)
    { // Verifica que tenga entre 7 y 8 digitos.
        printf("DNI inválido. Debe tener entre 7 y 8 dígitos.\n");
        return 0;
    }

    // Validar que todos los caracteres sean números.
    for (int j = 0; j < largo; j++)
    {
        if (dni[j] < '0' || dni[j] > '9')
        {
            printf("DNI inválido. Debe contener solo números.\n");
            return 0; // DNI inválido.
        }
    }

    // Validar que empiece con 5, 6 o entre 10 y 60.
    int dniNumero;
    scanf(dni, "%d", &dniNumero);
    int inicio = dniNumero / 1000000;

    if (!(inicio == 5 || inicio == 6 || (inicio >= 10 && inicio <= 60)))
    {
        printf("DNI inválido. Debe comenzar con 5, 6, o entre 10 y 60.\n");
        return 0;
    }
    return 1; // DNI válido.
}

void ordenarPorApellidoNombre(
    int n,
    char apellido[240][50],
    char nombre[240][50],
    char dni[240][10],
    char codigo[240][4],
    int edad[240])
{
    int i, j, menor;
    char tempApellido[50], tempNombre[50], tempDni[10], tempCodigo[4];
    int tempEdad;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;

        for (j = i + 1; j < n; j++)
        {
            int compara = strcmp(apellido[j], apellido[menor]);
            if (compara < 0)
            {
                menor = j;
            }
            else if (compara == 0)
            {
                if (strcmp(nombre[j], nombre[menor]) < 0)
                {
                    menor = j;
                }
            }
        }

        if (menor != i)
        {
            // Intercambiar apellido
            strcpy(tempApellido, apellido[i]);
            strcpy(apellido[i], apellido[menor]);
            strcpy(apellido[menor], tempApellido);

            // Intercambiar nombre
            strcpy(tempNombre, nombre[i]);
            strcpy(nombre[i], nombre[menor]);
            strcpy(nombre[menor], tempNombre);

            // Intercambiar DNI
            strcpy(tempDni, dni[i]);
            strcpy(dni[i], dni[menor]);
            strcpy(dni[menor], tempDni);

            // Intercambiar edad
            tempEdad = edad[i];
            edad[i] = edad[menor];
            edad[menor] = tempEdad;

            // Intercambiar código
            strcpy(tempCodigo, codigo[i]);
            strcpy(codigo[i], codigo[menor]);
            strcpy(codigo[menor], tempCodigo);
        }
    }
}

int main(void)
{
    int n, i;

    int codigosDestinos;
    char codigosDestinosTexto[4][4] = {"BRA", "MDQ", "MZA", "BRC"};                    // Codigo de los paises.
    char nombresDestinos[4][30] = {"Brasil", "Mar del Plata", "Mendoza", "Bariloche"}; // Nobre de las ciudades.
    float precios[4] = {25000.0, 14000.0, 19000.0, 23000.0};                           // Precios de los viajes.
    int capacidades[4] = {0, 0, 0, 0};                                                 // Contador por destino.
    float preciosInd[4] = {0, 0, 0, 0};

    char codigo[240][4];     // Guarda el codigo del destino, cada pasajero tiene su propio codigo.
    char dni[240][10];       // Guarda el DNI como cadenad de texto, para validarlo por caracter.
    char apellido[240][50];  // Guarda el apellido de cada pasajero.
    char nombre[240][50];    // Guarda el nombre de cada pasajero.
    int edad[240];           ////Guarda la edad de cada pasajero.
    int pagaTarjeta[240];    ////Indica si el pasajero pagó con tarjeta.
    float importeFinal[240]; // Importe final que debe pagar c/pasajero. Se calcula con base, edad y si paga con tarjeta.

    // Cargar cantidad de pasajero.
    do
    {
        printf("Ingrese la cantidad de pasajeros a cargar: ");
        scanf("%d", &n);

        if (n <= 0 || n > 320)
        {
            printf("Ingrese una cantidad valida.\n");
        }
    } while (n <= 0 || n > 320); // Valida que sea una cantidad valida.

    for (i = 0; i < n; i++)
    {
        printf("\n Cargar datos del pasajero: %d\n", i + 1);

        int destinoValido = 0;

        do
        {
            printf("---DESTINO---\n");
            printf("1- BRA\n");
            printf("2- MDQ\n");
            printf("3- MZA\n");
            printf("4- BRC\n");
            printf("ingrese el codigo de su destino: ");
            scanf("%d", &codigosDestinos);
        } while (codigosDestinos < 1 || codigosDestinos > 4); // Valida que el destino sea valido.

        if (capacidades[codigosDestinos - 1] < 60) // Valida que haya capacidad en el viaje.
        {
            strcpy(codigo[i], codigosDestinosTexto[codigosDestinos - 1]);
            capacidades[codigosDestinos - 1]++;
            destinoValido = codigosDestinos - 1;
        }
        else
        {
            printf("Ese destino ya alcanzó el máximo de 60 pasajeros. Elija otro.\n");
            i--;      // Para que repita este pasajero.
            continue; // Volver a intentar.
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
            importeFinal[i] = 2000.0; // Si el pasajero es menor a 5 solo paga el seguro.

                preciosInd[destinoValido] += importeFinal[i];
        }
        else
        {
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

        float base = precios[destinoValido]; // Se guarda el precio del viaje ya definidos al principio.

        if (pagaTarjeta[i] == 1)
        {
            importeFinal[i] = base * 1.05; // Si se paga con tarjeta, tiene un 5% de recargo.
                preciosInd[destinoValido] += importeFinal[i];

        }
        else
        {
            importeFinal[i] = base; // No hay recargo, solo se paga el precio base.
                preciosInd[destinoValido] += importeFinal[i];
        }
    }

    int opcion;
    do
    {
        printf("\n");
        printf("-----MENU-----\n");
        printf("1- Mostrar lista ordenada por Apellido y Nombre\n");
        printf("2- Mostrar lista ordenada por Destino y Apellido-Nombre\n");
        printf("3- Mostrar lista de Destinos\n");
        printf("4- Buscar por DNI\n");
        printf("5- Mostrar estadisticas\n");
        printf("6- Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        printf("\n");
        switch (opcion)
        {
        case 1:
            ordenarPorApellidoNombre(n, apellido, nombre, dni, codigo, edad);

            for (int i = 0; i < n; i++)
            {
                int indice = -1;
                for (int k = 0; k < 4; k++)
                {
                    if (strcmp(codigo[i], codigosDestinosTexto[k]) == 0)
                    {
                        indice = k;
                        break;
                    }
                }

                printf("Apellido  y nombre: %s %s\n", apellido[i], nombre[i]);
                printf("DNI: %s\n", dni[i]);
                printf("Edad: %d\n", edad[i]);
                printf("Destino: %s \n", nombresDestinos[indice]);
                printf("\n");
            }
            break;

        case 2:
        {
            for (int i = 0; i < n; i++)
            {

                printf("Destino: %s \n", codigo[i]);
                printf("Apellido  y nombre: %s %s\n", apellido[i], nombre[i]);
                printf("DNI: %s\n", dni[i]);
                printf("Edad: %d\n", edad[i]);
                printf("\n");
            }
        }
        break;

        case 3:
        {
            printf("----LISTA DE DESTINOS---\n");
            float totalRecaudado = 0;
            for (int i = 0; i < 4; i++)
            {
                printf("Codigo de destino: %s \n", codigosDestinosTexto[i]);
                printf("La cantidad de pasajeros: %d\n", capacidades[i]);
                printf("Importe total del destino es: %f\n", preciosInd[i]);
                printf("\n");
                totalRecaudado = totalRecaudado + importeFinal[i];
            }

            printf("El total recaudado es: %f\n", totalRecaudado);

            break;
        }

        case 4:
        {
        }
        break;

        case 5:
        {
        }
        break;

        case 6:
            printf("Saliendo del sistema...\n");
            break;

        default:
            printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 6);

    system("pause");
    return 0;
}