#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char c1[] = "hola Mundo";
    char c2[] = "hola mundoos";
    int i;

    i = strcmp(c1, c2);

    if (i > 0)
    {
        printf("La cadena %s es mayor a la cadena %s\n", c1, c2);
    }
    else if(i<0)
    {
        printf("La cadena %s es mmenor a la cadena %s\n", c1, c2);
    }
    else
    {
        printf("La cadena %s es igual a la cadena %s\n", c1, c2);
    }

    printf("\n");
    // SEGUNDA OPCION
     i = strncmp(c1, c2,5); //Evaluar solo los primeros 5 caracteres
     puts("Los primeros 5 caracteres");

    if (i > 0)
    {
        printf("La cadena %s es mayor a la cadena %s\n", c1, c2);
    }
    else if(i<0)
    {
        printf("La cadena %s es mmenor a la cadena %s\n", c1, c2);
    }
    else
    {
        printf("La cadena %s es igual a la cadena %s\n", c1, c2);
    }
    return 0;
}
