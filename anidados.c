#include <stdio.h>
const int LINEAS = 10;
const char BLANCO = ' ';
const char CRUZ = 'x';

/*PUTCHAR se utiliza para imprimir un solo caracter de salida estandar 
Por otro lado PUTS imprime una cadena de caracteres seguida de un salto de linea*/

int main(int argc, char const *argv[])
{
    int fila, blancos, cruces;
    puts(" "); // comillas dobles porque es cadena de caracteres

    for (fila = 1; fila <= LINEAS; fila++)
    {
        //putchar('\t'); // comillas simple porque son caracteres
        for (blancos = LINEAS - fila; blancos > 0; blancos--)
        {
            putchar(BLANCO);
            for (cruces = 1; cruces < 2 * fila; cruces++)
            {
                putchar(CRUZ);
                
            }puts(" ");
        }
    }

    return 0;
}
