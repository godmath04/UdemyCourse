#include<stdio.h>
struct personas
{
    char nombre[80];
    char apellido[80];
    int edad;
};


int main(int argc, char const *argv[])
{
    struct personas DatosPersonas[3];

    printf("Por favor introduce 3 nombres de tu fmailia\n");
    int i;
    for (int i = 0; i < 3; i++)
    {
        printf("Persona nr. %d\n", (i+1));
        printf("Nombre: \n");
        gets(DatosPersonas[i].nombre);
        printf("Apellido: \n");
        gets(DatosPersonas[i].apellido);
        printf("Edad: \n");
        scanf("%d%*c", &DatosPersonas[i].edad);
        printf("********");

    }

    printf("Las personas de tu familia son: \n");
    for (int j = 0; j < 3; j++)
    {
        printf("Persona nr. %d\n", (j+1));
        printf("Nombre: %s \n", DatosPersonas[j].nombre); 
        printf("Apellido: %s\n", DatosPersonas[j].apellido);
        printf("Edad: %d\n", DatosPersonas[j].edad);
        printf("********");
    }
    
    
  
    
    return 0;
}
