#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z , u ,v;
    int *a[5]; 
    // Asignamos un espacio de memoria con el valor
    a[0] = &x;
    a[1] = &y;
    a[2] = &z;
    a[3] = &u;
    a[4] = &v;
    // Asignamos los valores
    *a[0] = 1;
    *a[1] = 10;
    *a[2] = 2;
    *a[3] = 4;
    *a[4] = 11;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("u: %d\n", u);
    printf("v: %d\n", v);


    return 0;
}
