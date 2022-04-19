/* 2.	Crear un programa que permita:
a) ingresar dos números
b) determinar el mayor y  el menor considerando la posibilidad de igualdad
 */

#include <stdio.h>


main(){

int num1, num2;

printf("Ingrese un numero: ");
scanf("%d", &num1);
printf("Ingrese el segundo numero: ");
scanf("%d", &num2);
if(num1 > num2){
    printf("%d es mayor que %d", num1, num2);
}if (num1 < num2)
{
    printf("%d es mayor que %d", num2, num1);
}if (num1 == num2)
    printf("Son iguales");

}