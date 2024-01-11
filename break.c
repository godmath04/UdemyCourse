#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Uso del break 
    /*
    int n, numero;
    n = 10;
    printf("Adivina el numero que estoy pensando entre 1 y 10.\n");
    while (scanf("%d", &numero))
    {
        if (numero == n)
            break; // Rompe el programa y no muestra mas nada
        printf("Adivina el numero que estoy pensando entre 1 y 10.\n");
    }
    printf("Fin"); */

    int i;
    for (int i = 0; i < 100; i++)
    {
        if (i ==10)
        continue; // Hace que se salte esa linea
        {
            printf("El valor es> %d\n", i);
        }
        
    }
    
    
    return 0;
}
