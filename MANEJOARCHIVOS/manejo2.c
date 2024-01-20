#include <stdio.h>

int main(int argc, char const *argv[])
{
    char archivo[10] = "datos.txt"; //archivo a maniuplar
    FILE *ptr; //tipo apuntador
    int i;

    ptr = fopen(archivo, "a"); //apunta a la funcion, la abre y escribe al final
    printf("Archivo: %s\n", archivo);

    if (ptr == NULL) //Verifica el archivo
    {
        printf("Error al intentar abrir el archivo");
        return 1; // es uimportante
    }
    else
    {
        printf("Enhorabuena el archivo fue abierto o creado");
    }

    printf("Vamos a escribir el alfabeto en el archivo\n");

    for (i = 0; i < 26; i++)
    {
        printf("%c\n", fputc('A' + i, ptr));
        //fput pasa con que comienza, lo que suma y se pasa el puntero
    }

    if (fclose(ptr)) // se verifica si se cerro
    {
        printf("El archivo se cerr'o correctamente.\n");
    }
    else
    {
        printf("El archivo no se cerro corrrectamente");
        return 1;
    }

    return 0;
}
