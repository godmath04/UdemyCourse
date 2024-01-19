#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 20;
    // Mostramos el valor
    printf("El valor de la variable es %d.\n", numero);
    // Direccion en memoria
    printf("%p\n", &numero);
    // Mostrar almecenamiento
    printf("El amlmacenamiento es %d\n", sizeof(numero)); // en bytes
    return 0;
}
