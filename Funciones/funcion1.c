/*Consideraciones 
No se puede una dentro de otra
No se la puede llamar desde cualquier lugar*/

#include<stdio.h>

int fun(){
    // Variable estatica que no pierde su valor, sino va aumentando
    static int count = 0;
    count++;
    return count;
}
// Variable normal - esta va perdiendo su valor
int func(){
    int count = 0;
    count++;
    return count;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", fun());
    printf("%d\n", fun()); // Al primer llamado vale 1 y luego 2
    printf("%d\n", fun());
    

   printf("%d\n", func());
    printf("%d\n", func()); // Al primer llamado vale 1 y luego 2
    printf("%d", func());
    return 0;
}
