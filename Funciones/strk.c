#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char contenido[] = "1,2,3,4,5";
    char *token;
    int sumaTotal;

    sumaTotal = 0;
    token = strtok(contenido, ","); // Primero se pasa el contenido y luego el parametro que limita el contenido
    // Si hubiera un punto pondria ",."
    if (token == NULL)
    { // Se verifica que el valor no sea nulo
        printf("No hay tokens.\n");
        return -1;
    }

    sumaTotal += atoi(token); // atoi lo convierte a entero
    while (token != NULL)
    {
        token = strtok(NULL, ","); // el null para que no se vuelva a suscribir
        if (token != NULL)
        {
            sumaTotal += atoi(token);
        }
    }
    printf("Su,a total: %d\n", sumaTotal);

    return 0;
}
