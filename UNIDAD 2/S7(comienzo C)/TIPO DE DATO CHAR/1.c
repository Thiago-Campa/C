//Imprimir los caracteres 'A', 'B', 'C' y sus códigos ASCII correspondientes.

#include <stdio.h>

int main()
{
    char letraA = 'A';
    char letraB = 'B';
    char letraC = 'C';

    printf("Letra: %c  -  Código ASCII: %d\n", letraA, letraA);
    printf("Letra: %c  -  Código ASCII: %d\n", letraB, letraB);
    printf("Letra: %c  -  Código ASCII: %d\n", letraC, letraC);

    system("pause");

    return 0;
}