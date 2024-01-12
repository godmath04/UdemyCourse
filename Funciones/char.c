#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char nombre[70];
    printf("Por favor escribe tu nombre:\n");
    gets(nombre); // Se queda esperando hasta meterle el nombre
    printf("Hola %s tu nombre tiene %d letras.\n", nombre, strlen(nombre)); //


    char c;
    int i = 0;
    do
    {
        printf("Ingrese un caracter: ");
        c = getchar();
        fflush(stdin);
        printf("El caractrer ingresasddo es: ");
        putchar(c);
        putchar('\n');
        putchar('\n');
        i++;
    } while (i<6);
    
    return 0;
}
