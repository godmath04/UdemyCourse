/* 1. Pida por teclado dos numeros 
2. Calcule la suma y a multiplicacion
3. Muestre sus resultados*/

/*3er EJercicios, tomar 3 notas y sacar su media*/

/*4to Ejercicio, tomar dos variables y cambiarles de lugar*/
/*Ejercicio 5to. Mostrar el numero anterior y posterir de un numero ingresado por el usuario*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Ingrese dos numeros para ser sumados y multiplicados:\n");
    scanf("%d", &num1);
    printf("Ingrese el siguiente:\n");
    scanf("%d", &num2);
    printf("El valor de su suma es %d y de su multipliacion es %d", num1 + num2, num1 * num2);
    getch(); // 
    return 0;
}
