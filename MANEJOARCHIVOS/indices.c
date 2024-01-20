#include <stdio.h>

int main(int argc, char const *argv[])
{
    char archivo[10] = "info.txt";
    char cadena[80] = "Estoy estudiando C en Udemy";
    FILE *ptr;

    fpos_t posicion = 0, inicio;

    ptr = fopen(archivo, "w+"); // Escribiendo y visualizando
    printf("La informacion se est'a guardando en \'%s\' \n", archivo);
    if (ptr)
    {
        printf("El archivo se abri'o correctamente.\n");
    }
    else
    {
        printf("Error al intentar abrir el archivo\n");
        return 1;
    }

    fgetpos(ptr, &inicio); // el & es porque marcamos posiciones
    printf("El iundicador de indice del archivo es %d\n", posicion);

    fgetpos(ptr, cadena);
    printf("La cadena L %s\n ", cadena);

    fgetpos(ptr, &posicion); // el & es porque marcamos posiciones
    printf("El iundicador de indice del archivo es %d\n", posicion);

    return 0;
}
