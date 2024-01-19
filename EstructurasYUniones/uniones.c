#include<stdio.h>

typedef union Persona Persona;

union Persona
{
    char nombre[50];
    char inicial;
};



int main(int argc, char const *argv[])
{
    Persona alvaro = {"Alvaro"};
    printf("Nombre: %s\n", alvaro.nombre);
    printf("Inicial: %c\n", alvaro.inicial);
    return 0;
}
