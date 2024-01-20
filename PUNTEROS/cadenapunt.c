#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *datos[] = {"Hola", "Udemy", "Progra", "maria"};
    int i, tam = sizeof(datos) / sizeof(char *);
    for (i = 0; i < tam; i++)
    {
        printf("%s\n", datos[i]);
    }
    printf("\n");
    

    return 0;
}
