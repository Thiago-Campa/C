//Escribir el código C del siguiente enunciado (usar dos funciones, 
//una para los ítems a y b y otra función para el ítem c):

//Almacenar las ventas (reales) de 12 clientes en un arreglo. Calcular y mostrar:
//a. Mayor venta.
//b. Número del cliente al cual corresponde la mayor venta.
//c. Promedio de ventas.

//Nota: validar que la venta sea menor o igual a 10000 y mayor a 0.

#include <stdio.h>
#include <stdlib.h>

void mostrarVentaMayorYCliente(float ventas[], int cantidad)
{
    float mayor = ventas[0];
    float cliente = 0;

    for(int i=1; i<cantidad; i++)
    {
        if(ventas[i] > mayor)
        {
            mayor = ventas[i];
            cliente = i;
        }
    }

    printf("mayor venta: %.2f\n", mayor);
    printf("cliente con la mayor venta: %d\n", cliente+1 );
}

void mostrarPromedio(float ventas[], float cantidad)
{
    float suma = 0, promedio;
    int i;

    for(i=0; i<cantidad; i++)
    {
        suma = suma + ventas[i];
    }

    promedio = suma / cantidad;

    printf("el promedio es: %.2f", promedio);
}


int main(void)
{
    float clientes[12];
    float venta;
    int i;

    for(i=0; i<12; i++)
    {
        do
        {
            printf("ingrese la venta al cliente %d: ", i+1);
            scanf("%f", &venta);
        } while (venta < 0 || venta >10000);
        
        if(venta>0 && venta <=10000)
        {
            clientes[i] = venta;
        }
    }

    mostrarPromedio(clientes, 12);
    mostrarPromedio(clientes, 12);

    system("pause");
    return 0;
}