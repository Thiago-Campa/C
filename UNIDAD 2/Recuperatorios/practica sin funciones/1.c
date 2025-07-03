//Cargar las edades de hasta 40 personas. Finalizar la carga si se ingresa una edad negativa. 
//Validar que la edad sea entre 1 y 120. Al finalizar, mostrar la cantidad de edades válidas 
//ingresadas y el promedio.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float personas[40];
    float suma = 0, promedio;
    int contador = 0;
    int i=0;

    while(i<40)
    {
        int edad;

        printf("ingrese la edad de la persona %d: ", i+1);
        scanf("%d", &edad);

        if(edad < 0)
        {
            printf("saliendo...\n");
            break;
        }

        if(edad > 0 && edad <= 120)
        {
            contador ++;
            personas[i] = edad;
            suma = suma + edad; 
            i++;
        }
        else
        {
            printf("ingrese una edad valida.\n");
        }
    }

    if(contador > 0)
    {
        promedio = suma / contador;   

        printf("cantidad de edades validas: %d\n", contador);
        printf("promedio: %.2f\n", promedio);
    }

    system("pause");
    return 0;
}