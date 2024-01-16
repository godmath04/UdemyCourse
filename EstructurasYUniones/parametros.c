#include <stdio.h>

// Creamos la estructura
struct autos
{
    char marca[80];
    char modelo[80];
    int anio
};
void captura(struct autos *ptr);
void muestra(struct autos miAuto);

int main(int argc, char const *argv[])
{
    struct autos autoPref;

    captura(&autoPref);
    muestra(autoPref);
    return 0;
}

void captura(struct autos *ptr){
    printf("Marca \n");
    gets(ptr->marca);
    printf("Modelo: \n");
    gets(ptr -> modelo);
    printf("Anio \n");
    scanf("%d", &ptr -> anio);
}

void muestra(struct autos miAuto){
    printf("Tu auto prferido es de marca %s, modelo %s y es del anio %d\n", miAuto.marca, miAuto.modelo, miAuto.anio);
};