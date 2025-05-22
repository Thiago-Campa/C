//Declarar un array de tipo entero de 5 componentes, asignarles un valor, calcular
//y mostrar la suma de sus componentes y el promedio.

#include <stdio.h>

int main() {
    int numeros[5];
    int suma = 0;
    float promedio;

    // Ingreso de valores y suma
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    // Calcular promedio
    promedio = suma / 5.0;

    // Mostrar resultados
    printf("\nSuma de los valores: %d\n", suma);
    printf("Promedio de los valores: %.2f\n", promedio);

    return 0;
}
