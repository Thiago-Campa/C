//Dado el vector inflación = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
//Cada valor representa la inflación de un mes (enero a diciembre). Se pide:
//a. Calcular e informar la inflación anual
//b. Determinar e informar la inflación más baja y el número de mes
//correspondiente. Ejemplo: Mes 2 = 0.1
//c. Determinar e informar la inflación más alta y el número de mes
//correspondiente. Ejemplo: Mes 12 = 0.9

#include <stdio.h>

int main() {
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float sumaAnual = 0;
    float min = inflacion[0];
    float max = inflacion[0];
    int mesMin = 0;
    int mesMax = 0;

    // Calcular suma anual y buscar máximos y mínimos
    for (int i = 0; i < 12; i++) {
        sumaAnual += inflacion[i];

        if (inflacion[i] < min) {
            min = inflacion[i];
            mesMin = i;
        }

        if (inflacion[i] > max) {
            max = inflacion[i];
            mesMax = i;
        }
    }

    // Mostrar resultados
    printf("a. Inflación anual: %.1f\n", sumaAnual);
    printf("b. Inflación más baja: Mes %d = %.1f\n", mesMin + 1, min);
    printf("c. Inflación más alta: Mes %d = %.1f\n", mesMax + 1, max);

    return 0;
}
