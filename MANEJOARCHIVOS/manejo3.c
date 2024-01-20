#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c, n = 0;
    FILE *ptr;
    char archivo[10] = "datos.txt";
    if ((ptr = fopen(archivo, "rt")) == NULL)
    {
        printf("Lo sentimos no se puede abrir el archivo\n");
    }

    while ((c = fgetc(ptr))!= EOF)
    {
        if (c == '\n')
        {
            n++;
            printf("\n");
        }else
        {
            putchar(c);
        }
        
        
    }
    printf("\nEl archivo \'%s\', tiene %d lineas\n", archivo, n);
    fclose(ptr);
    
    
    return 0;
}
