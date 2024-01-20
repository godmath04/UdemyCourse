#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    char archivo[11] = "expresiones.txt";
    char cadena[64];
    int i;

    // Abrir archivo
    ptr = fopen(archivo, "w");
    if (ptr)
    {
        printf("El archivo \'%s\' se abrio de manera correcta.\n", archivo);
    }
    else
    {
        printf("Error al abrir archivo\n");
        return 1;
    }

    printf("Escriba la expresion que usted desee y luego retorno para finalizar \n");
    do
    {
        gets(cadena);
        fprintf(ptr, "%s\n", cadena);
        printf("Escriba la expresion que usted desee y luego retorno para finalizar \n");
    } while (strcmp(cadena, "") != 0);
    fclose(ptr);
    

    // Abrir archivo
    printf("Vamos a leer las expresiones que has escrito.\n");
    ptr = fopen(archivo, "r");
    if (ptr)
    {
        printf("El archivo \'%s\' se abrio de manera correcta.\n", archivo);
    }
    else
    {
        printf("Error al abrir archivo\n");
        return 1;
    }
    // Leer
    do
    {
        fgets(cadena, 64, ptr);
        puts(cadena);
    } while (!feof(ptr));
    fclose(ptr);

    return 0;
}
