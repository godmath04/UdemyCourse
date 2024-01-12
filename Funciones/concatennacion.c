#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char c1[] = "hola mundo";
    char c2[] = "holAA mundoos";
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

    return 0;
}
