#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char nombre[80];
    char edad[3];
    printf("Escribe tu edad\n");
    gets(edad);
    printf("Escribe tu nombre\n");
    gets(nombre);
    printf("Tu edad es %d y tu nombre es %s\n", atol(edad), nombre);
    return 0;
}
