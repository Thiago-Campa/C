/*Crear un programa en C que dé la bienvenida al usuario solicitándole su inicial y
mostrando un mensaje que incluya dicha inicial. Para llevar a cabo esta tarea,
desarrolla una función llamada mensajeBienvenida, que reciba como argumento
la inicial ingresada por el usuario. Esta función deberá imprimir un mensaje de
bienvenida en la consola, incluyendo la inicial proporcionada como parámetro.
En el programa principal (main), se solicitará al usuario que ingrese su inicial y
luego se llamará a la función mensajeBienvenida, pasándole la inicial ingresada
como argumento. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mensajeBienvenida(char inicial)
{
    printf("Bienvenido! veo que tu nombre inicia con la letra %c ", inicial);
}

int main(void)
{
    char letra;

    printf("ingrese la primer letra de su nombre: ");
    scanf("%s", &letra);

    mensajeBienvenida(letra);

    printf("\n");
    
    system("pause");
    return 0;
}
