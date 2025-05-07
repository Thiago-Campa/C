//Ingresar tres valores, sumarlos e imprimir esa suma

#include <stdio.h>

int main()
{
    int n1, n2, n3, resultado;

    printf("ingrese le primer numero: ");
    scanf("%d", &n1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &n2);

    printf("ingrese el tercer numero: ");
    scanf("%d", &n3);

    resultado = n1 + n2 + n3;

    printf("el resultado de la suma es: %d\n", resultado);

    system ("pause");

    return 0;
}