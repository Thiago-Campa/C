//Almacenar las edades (enteros) de 15 personas.
//Validar que cada edad sea mayor a 0 y menor a 120.
//Mostrar con dos funciones:

//a) Edad más alta
//b) Número de la persona con esa edad
//c) Promedio de edades

#include <stdio.h>
#include <stdlib.h>

void mostrarMayorEdadYPersona(float gente[], int cantidad)
{
    float mayor = gente[0];
    float persona = 0;

    for(int i=0; i<cantidad; i++)
    {
        if(gente[i] > mayor)
        {
            mayor = gente[i];
            persona = i;
        }
    }

    printf("la edad mayor es: %f\n", mayor);
    printf("corresponde a la persona: %d\n", persona+1);
}

void mostrarPromedio(float gente[], int cantidad)
{
    float suma = 0, promedio;

    for(int i=0; i<cantidad; i++)
    {
        suma = suma + gente[i];
    }

    promedio = suma / cantidad;

    printf("el promedio es: %.2f\n", promedio);
}

int main(void)
{
    float personas[15];
    float edad;
    int i;

    for(i=0; i<15; i++)
    {
        do
        {
            printf("Ingrese la edad de la persona %d:", i+1);
            scanf("%f", &edad);
        } while (edad<= 0 || edad > 120);

        if(edad > 0 && edad <= 120)
        {
            personas[i] = edad;
        }
    }    
    
    mostrarMayorEdadYPersona(personas, 15);
    mostrarPromedio(personas, 15);

    system("pause");
    return 0;
}