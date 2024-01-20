#include<stdio.h>
// SE ACCEDE A LOS RCHIVOS MEDIANTE FILE *
// r abre un fichero para lectura
// w abre un fichero para escritura
//a abre un fichero para agregar datos al final de mismo
// + se utiliza para abrir el fichero en modo lectura y escritoura
//b fichero de tipo binario
// t fichero tipo texto


int main(int argc, char const *argv[])
{
    FILE *ptr;
    char archivo[] = "datos.txt";
    ptr = fopen(archivo, "r"); //abrir archivo tipo lectura
    if (ptr = NULL)
    {
        printf("Error el abrir el fichero %s\n", archivo);
        return 1;
    }
    fclose(ptr); //siempre hay que cerrar el archivo
    
    return 0;
}
