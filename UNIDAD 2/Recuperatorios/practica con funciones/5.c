//Registrar 10 temperaturas diarias (float, en grados).
//Validar que estén entre -50 y 60.
//Mostrar:

//a) Temperatura máxima
//b) Día en el que ocurrió
//c) Temperatura promedio


#include <stdio.h>
#include <stdlib.h>

void mostrarPromedio(float termica[], int cantidad)
{
    float suma = 0, promedio;

    for(int i=0; i<cantidad; i++)
    {
        suma = suma + termica[i];
    }

    promedio = suma / cantidad;

    printf("el promedio es: %.2f\n", promedio);
}

void mostrarMyorTempYDia(float termica[], int cantidad)
{
    float mayor = termica[0];
    float dia = 0;

    for(int i=0; i<cantidad; i++)
    {
        if(termica[i] > mayor)
        {
            mayor = termica[i];
            dia = i;
        }
    }

    printf("la mayor temperatura fue: %.2f\n", mayor);
    printf("corresponde al dia: %d", dia);
}
int main(void)
{
    float temperaturas[10];
    float grados;
    int i;

    for(i=0; i<10; i++)
    {
        do
        {
            printf("ingrese la temeperatura del dia %d: ", i+1);
            scanf("%f", &grados);
        } while (grados < -50 || grados > 60);
        
        if(grados > -50 && grados < 60)
        {
            temperaturas[i] = grados;
        }
        
    }

    mostrarMyorTempYDia(temperaturas, 10);
    mostrarPromedio(temperaturas, 10);

    system("pause");
    return 0;
}