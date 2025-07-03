#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float estudiantes[30];
    int contador = 0;
    float suma = 0, promedio;
    int i=0;

    while (i<30)
    {
        float nota;

        printf("ingrese la nota del alumno %d: ", i+1);
        scanf("%f", &nota);
        
        if(nota < 0)
        {
            printf("saliendo...\n");
            break;
        }

        if(nota > 0 && nota <= 10)
        {
            estudiantes[i] = nota;
            contador ++;
            suma = suma +  nota;
            i++;
        }
        else
        {
            printf("ingrese una nota valida\n");
        }
    }

    if(contador > 0)
    {

        promedio = suma / contador;
        printf("cantidad de notas validas: %d\n ", contador);
        printf("promedio de notas:  %.2f\n ", promedio);
    }

    system("pause");
    return 0;
}

