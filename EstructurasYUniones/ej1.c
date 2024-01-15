#include <stdio.h>
struct coche
{
    char marca[100];
    char modelo[100];
    char color[100];
    int anio;
};

int main(int argc, char const *argv[])
{
    struct coche *ptr;
    struct coche coche1 = {
        "Audi", "TT", "azul", 1988};
    ptr = &coche1;
    printf("El tamanio de la estructura del coche es %d bytes\n", sizeof(coche1));
    printf("Mi coche favorito es un %s y es de color %s, tambien es del anio %d\n", coche1.marca, coche1.color, coche1.anio);
    printf("Tengo un auto de marca %s y es de color %s y es del anio %d", ptr->marca, ptr->color, ptr->anio);
    return 0;
}
