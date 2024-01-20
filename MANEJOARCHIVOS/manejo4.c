#include <stdio.h>
// funciones fprint fscanf, feof

int main(int argc, char const *argv[])
{
    FILE *ptr;
    char archivo[20] = "MiEscritura.txt";
    char cadena[80];

    // Modo escritura
    // abrir archivo
    ptr = fopen(archivo, "w");
    if (ptr)
    {
        printf("Archivo %s abierto\n", archivo);
    }
    else
    {
        printf("Error al intentar abrir el archivo\n");
        return 1;
    }

    // Escribir en al arhicov
    fprintf(ptr, "Estoy aprendiendo C\n");
    fprintf(ptr, "En lka lkasjdlkao C\n");
    fprintf(ptr, "Easdasdsadasdads C\n");
    fprintf(ptr, "EsoJala puedan aprender  C\n");
    fprintf(ptr, "Estoy aprendiendo C\n");

    // cerrar archivo
    if (fclose(ptr))
    {
        printf("\nError al cerrar archivo\n");
        return 1;
    }
    else
    {
        printf("\nEl archivo se cerro correctamente");
    }

    // Modo Lectura
    // abrir archivo
    ptr = fopen(archivo, "r");
    if (ptr)
    {
        printf("Archivo %s abierto\n", archivo);
    }
    else
    {
        printf("Error al intentar abrir el archivo\n");
        return 1;
    }
    // Finalmente leerlo
    do
    {
        fgets(cadena, 80, ptr); // el numero es el de caracteres
        puts(cadena);
        // cerrar archivo

    } while (!feof(ptr));
    if (fclose(ptr))
    {
        printf("\nError al cerrar archivo\n");
        return 1;
    }
    else
    {
        printf("\nEl archivo se cerro correctamente");
    }

    return 0;
}
