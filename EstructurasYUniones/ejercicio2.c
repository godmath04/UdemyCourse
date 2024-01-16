#include<stdio.h>

struct autos
{
    char marca[50];
    char modelo[50];
    int anio;
};

int main(int argc, char const *argv[])
{
    struct autos miAutos[4] = {"audi",
    "TT", 200, "Renault", "Clio",
    2005, "Ford", "Mustang", 1999,
    "Citroen", "C3", 2011};
    miAutos[3].anio = 100;
    printf("Mis autos son: \n");
    int i;
    for (int i = 0; i < 4; i++)
    {
        printf("La marca de mi auto es %s, modelo %s, del anio %d\n", miAutos[i].marca, miAutos[i].modelo, miAutos[i].anio);
    }
    

    return 0;
}
