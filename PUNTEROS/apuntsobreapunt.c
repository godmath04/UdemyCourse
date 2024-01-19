#include<stdio.h>
int main(int argc, char const *argv[])
{
    int dato = 20;
    int *apuntador1 = &dato;
    int **apuntador2= &apuntador1;
    int ***apuntador3 = &apuntador2;
    **apuntador2 = 100; // El dato se cambia a 100
    *apuntador1 = 50; // el dato cambia a 50
    ***apuntador3 = 250;  // el dato cambia a 250
    printf("%d", dato);
    return 0;
}
