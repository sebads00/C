/* 4.	Crear un programa que permita:

a) ingresar un número
b) determinar si es par o impar
Nota: realizar una versión con if y otra con switch
 */

#include <stdio.h>

main (){
    int numero;
    printf("Ingrese un numero ");
    scanf("%d", &numero);
    
    numero = numero %2;
    switch (numero)
    {
    case 0:
        printf("Es par");
        break;
    
    default:
        printf("Es impar");
        break;
    }
    
    if(numero % 2 == 0){
        printf("Es par");
    }else
        printf("Es impar"); 
}