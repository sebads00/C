/* Crear un programa que permita:
a) ingresar un número
b) determinar si el mismo es positivo o negativo
 */

#include <stdio.h>
main(){
int numero;

printf("ingrese un numero: ");
scanf("%d", &numero);

if (numero > 0){
printf("%d Es positivo", numero);
}if (numero == 0){
    printf("%d no se puede determinar", numero);
}if (numero < 0){
    printf("%d Es negativo", numero);
}
}