#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float clientes[25];
    float suma = 0, promedio;
    int i=0;
    int contador = 0;

    while(i<25)
    {
        float venta;

        printf("ingrese el valor de la venta %d: ", i + 1);
        scanf("%f", &venta);

        if(venta < 0)
        {
            printf("saliendo...\n");
            break;
        }

        if(venta > 0 && venta <= 10000)
        {
            contador ++;
            clientes[i] =  venta;
            suma = suma + venta;
            i++;
        }
        else
        {
            printf("nota invalida...\n");
        }
    }
        
    if(contador > 0)
    {
        promedio  = suma / contador;

        printf("el promedio de las ventas es: %.2f\n", promedio);
    }
    

    system("pause");
    return 0;
}