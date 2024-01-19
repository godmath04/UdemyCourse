#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int *ptr1; No es la forma correcta de un null
    // int *p1 = 1728313; no es recomendable inicializar un puntero as'i

    // Forma correcta de inicializar un puntero
    int *p1 = NULL;
    printf("%p", p1);
    return 0;
}
