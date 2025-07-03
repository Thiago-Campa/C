/*
    Almacenar los tiempos (en segundos, tipo float) de 15 corredores en un arreglo.
    Validar que cada tiempo esté entre 5.0 y 300.0 segundos.

    Usar dos funciones:

    Una función para calcular y mostrar:
    a) El tiempo más bajo (el más rápido).
    b) El número del corredor que obtuvo ese tiempo.

    Otra función para calcular y mostrar:
    c) El tiempo promedio.
*/

#include <stdio.h>
#include <stdlib.h>

void mostrarPromedio(float persona[], float cantidad)
{
    float suma = 0, promedio;

    for(int i=0; i<cantidad; i++)
    {
        suma = suma + persona[i];
    }

    promedio = suma / cantidad; 

    printf("el promedio es: %.2f\n");
}

void mostrarMenorTiempoYCorredor(float persona[], int cantidad)
{
    float menor = persona[300];
    float corredor = 0;

    for(int i=0; i<cantidad; i++)
    {
        if(persona[i] < menor)
        {
            menor = persona[i];
            corredor = i;
        }
    }

    printf("el tiempo mas bajo es: %f", menor);
    printf("corresponde al corredor: %d", corredor);
}
int main(void)
{
    float corredores[15];
    float tiempo;
    int i;

    for(i=0; i<15; i++)
    {
        do
        {
            printf("Ingrese el tiempo del corredor %d: ", i+1);
            scanf("%f", &tiempo);
        } while (tiempo < 5.0 || tiempo > 300.0);

        if(tiempo >= 5.0 && tiempo <= 300.0)
        {
            corredores[i] = tiempo;
        }    
    }

    mostrarMenorTiempoYCorredor(corredores, 15);
    mostrarPromedio(corredores, 15);

}