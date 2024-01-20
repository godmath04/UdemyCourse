#include<stdio.h>

int f1(void);
int f2(void);
int f3(void);

int main(int argc, char const *argv[])
{
    /*Puntero 'p' apunta  a una funcion que devuelve
    un entero int pero no toma ning'un parametro*/
    int (*p)(void);
    p = f1;
    printf("%d\n", p());

    p = f2;
    printf("%d\n", p());

    p = f3;
    printf("%d\n", p());
    return 0;
}

int f1(void){
    return 1;
}
int f2(void){
    return 2;
}
int f3(void){
    return 3;
}