#include <stdio.h>

struct infoDireccion
{
    char calle[40];
    int numero;
    char estado[40];
    char codpost[6];
};

typedef struct infoDireccion direccion;
typedef struct infoUsuario
{
    char nombre[40];
    char apellido[40];
    direccion dir;
    /* struct infoDireccion dir; esto se usa sin el typef */
    char telefono[10];
}usuario;

int main(int argc, char const *argv[])
{
    usuario maria = {
        "Maria",
        "Sosa",
        {"Avenida Siempreviva",
         2043, "Pichincha", "170523"},
        "0987654321",
    };

    printf("Usuario %s, %s.\n ", maria.apellido, maria.nombre);
    printf("Direccion %s, %d.Estado: %s\n ", maria.dir.calle,maria.dir.numero, maria.dir.estado);
    printf("codigo postal %s\n", maria.dir.codpost);
    return 0;
}
