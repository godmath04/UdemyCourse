#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;
    // Creamos un apuntador tipo constante
    int *const ptr = &x; 
    // La linea de abajo no permite cambiar la direccion del apuntador
    // ptr = &y; // Se da un error de calculo ya que no puede cambiarla direccion
   // Asignar un valor a nuestra constante, s'i se permite
   *ptr = 20; 
   printf("%d", x); 

    // Constante entera
   const int y = 20;
   // Constante puntero
   const int *ptr2 = &y;
   printf("%d",y);

    return 0;
}
