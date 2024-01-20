#include<stdio.h>

typedef union Persona Persona;

union Persona
{
    char nombre[50];
    char inicial; // AL ser union esto se convierta en lo que tenga el nombre

};



int main(int argc, char const *argv[])
{
    Persona alvaro = {"Alvaro"};
    printf("Nombre: %s\n", alvaro.nombre);
    printf("Inicial: %c\n", alvaro.inicial);
    // Al ser union y tener un caracter inicial por eso se muestra la A
    return 0;
}
