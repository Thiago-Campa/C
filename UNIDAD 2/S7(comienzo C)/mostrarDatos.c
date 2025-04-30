#include <stdio.h>

int main()
{
    int edad, altura;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura: ");
    scanf("%d", &altura);
    
    printf("La edad es: %d, la altura es: %d\n", edad, altura);
    
    system("pause");
    return 0;
}