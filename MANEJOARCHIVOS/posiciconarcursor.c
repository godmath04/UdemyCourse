/* Funciones
Funciontes utiles:
rewind() -> mueve el curso al inicio
fseek() -> vamos a una posicion determinada / el archivop se puede considerar
como un gran vector (texto o bytes)
ftell() -> posicion del momento en la que estamos

SEEK_SET (INICIO)
SEEK_CUR (ACTUAL)
SEEK_END (FINAL)
OFFSET -> indica el desplazamiento en relacion a la posicion de referencia


*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char archivot[15] = "datos.txt", cadena[81] = "";
    FILE *ptr;
    long int inicio, final;

    ptr = fopen(archivot, "r");
    /// Asegurarse el archivo
    printf("El archivo %s\n", archivot);
    if (ptr)
    {
        printf("Se abri'o correctamente\n");
    }
    else
    {
        printf("no se abri ocorrectamente\n");
        return 1;
    }

    if ((inicio = ftell(ptr) < 0))
    {
        printf("Eror inesperado al abrir ftell\n");
    }
    else
    {
        printf("La posicion inicial del cursor es: %d\n", inicio);
    }

    fseek(ptr, 0L, SEEK_END); // 0L pq es un numero largo
    final = ftell(ptr);
    printf("El tamanio que tienes en el archivo ees %d byte4s\n", final-inicio);

    fseek(ptr, 0L, SEEK_SET);
    fgets(cadena, 80, ptr);
    printf("El contenido que tienes en el archivo es: m %s\n", cadena);
    printf("El tamanio que teines en longitud es: %d\n", strlen(cadena));
    fclose(ptr);
    return 0;
}
