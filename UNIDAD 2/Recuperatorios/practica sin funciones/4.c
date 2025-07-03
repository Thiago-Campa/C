//Cargar sueldos (float, mayores a 0) de hasta 25 empleados.
// Cortar con sueldo negativo.
// Mostrar cuántos cobran más de $200.000 y el sueldo más bajo.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float empleados[25];
    int i = 0;
    int sueldosMayores200 = 0;
    float sueldo, primero = 1, sueldoBajo;

    while (i < 25)

    {
        printf("ingrese el sueldo del empleado %d: ", i+1);
        scanf("%f", &sueldo);

        if(sueldo <= 0)
        {
            printf("saliendo del sistem...\n");
            break;
        }

        empleados[i] = sueldo;

        if(primero)
        {
            sueldoBajo = sueldo;
            primero = 0;
        }
        else if (sueldo < sueldoBajo)
        {
            sueldoBajo  = sueldo;
        }

        if(sueldo > 200)
        {
            sueldosMayores200++;
        }
        i++;
    }

    printf("sueldo mas bajo: %f\n", sueldoBajo);
    printf("empleados con sueldo mayores a 200: %d\n", sueldosMayores200);
    
    system("pause");
    return 0;
}