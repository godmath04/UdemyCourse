#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c[] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr;
    ptr = &c[2];
    printf("%c | %x", *ptr, ptr);
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("c[%d] = %c \n", i, c[i]);
    }

    // Cambiar valor aplicando el puntero
    *ptr = 'w';
    printf("%c", c[2]);
    return 0;
}
