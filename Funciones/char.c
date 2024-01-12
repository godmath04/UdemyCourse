#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char nombre[70];
    printf("Por favor escribe tu nombre:\n");
    gets(nombre); // Se queda esperando hasta meterle el nombre
    printf("Hola %s tu nombre tiene %d letras.\n", nombre, strlen(nombre)); //
    return 0;
}
