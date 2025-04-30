#include <stdio.h>
int main()
{
    int n1, n2, resultado;

    printf("ingrese el primer numero: ");
    scanf("%d", &n1);

    printf("ingrese el segundo numero: ");
    scanf("%d", &n2);

    resultado = n1 + n2;

    printf("la suma es: %d\n", resultado);

    system("pause");

    return 0;
}