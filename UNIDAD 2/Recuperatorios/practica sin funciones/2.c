//Cargar los pesos (en kg) de hasta 50 personas. Finalizar cuando se ingresa un peso igual a cero.
//Validar que el peso sea mayor a 0 y menor o igual a 300.
//Al finalizar, mostrar el promedio de pesos y cuántos están por debajo de 60 kg.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float personas[50];
    float suma = 0, promedio;
    int contador = 0, pesoBajo = 0;
    int i = 0;

    while(i<50)
    {
        float peso;

        printf("Ingrese el peso de la persona %d: ", i+1);
        scanf("%f", &peso);

        if(peso < 0)
        {
            printf("saliendo...\n");
            break;
        }

        if(peso > 0 && peso < 60)
        {
            pesoBajo++;
            contador++;
            personas[i] = peso; 
            suma = suma + peso;
            i++;
        }
        else if(peso >= 60 & peso <=300)
        {
            contador++;
            personas[i] = peso; 
            suma = suma + peso;
            i++;
        }
        else
        {
            printf("ingrese un peso valido\n");
        }
    }

    if(contador > 0)
    {
        promedio = suma / contador;

        printf("personas con peso menor a 60kg: %d\n", pesoBajo);
        printf("promedio: %.2f\n", promedio);
    }

    system("pause");
    return 0;
}