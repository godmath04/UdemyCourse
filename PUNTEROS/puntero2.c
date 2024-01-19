#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dato = 100;
    int *ptrDato;
    ptrDato = &dato;
    *ptrDato = 150; // Aqui estoy cambiando el valor de dato, apuntando al espacio de memoria
    printf("El valor del dato: %d", dato);
    printf("El valor del apuntador %d\n", *ptrDato); // Con el asterisco para acceder al valor
    //Si en el printf le quito el * me dar'ia la direcci'on de memoria
    return 0;
}
