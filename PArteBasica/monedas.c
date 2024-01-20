/* Escriubir un programa que 
1. Pida una cantidad de pesos 
2. Calcule el valor en euros
3. Muestre el valor 
Nota: 1 euros = 166.386
*/

#include<stdio.h>
#define EURO 166.368
int main(int argc, char const *argv[])
{
    int pesos;
    float euros;
    printf("Ingrese el valor que dispone en pesos:\n");
    scanf("%d", &pesos);
    euros = pesos / EURO;
    printf("El valor en euros es: %.2f.\n", euros);
    return 0;
}
