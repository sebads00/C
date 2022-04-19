/* 5.	Crear un programa que permita:

a) ingresar tres números
b) determinar el mayor y  el menor considerando la posibilidad de igualdad

 */

#include <stdio.h>

main(){
    int num1, num2, num3;

    printf("Ingrese num1 ");
    scanf("%d", &num1);

    printf("Ingrese num2 ");
    scanf("%d", &num2);

    printf("Ingrese num3 ");
    scanf("%d", &num3);


    if(num1 > num2){
        if(num1 > num3){
            printf("%d es mayor \n", num1);
                if(num2 > num3){
                    printf("%d es mayor", num2);
                }
                if(num3 > num2){
                    printf("%d es mayor", num3);
                }
                if(num2 == num3){
                    printf("Los restantes son iguales");
                }
        }
    }
   
    if(num2 > num3){
        if(num2 > num1){
            printf("%d es mayor \n", num2);
                if(num1 > num3){
                    printf("%d es mayor", num1);
                }
                if(num3 > num1){
                    printf("%d es mayor", num3);
                }
                if(num1 == num3){
                    printf("Los restantes son iguales");
                }
        }
    }
     if(num3 > num2){
        if(num3 > num1){
            printf("%d es mayor \n", num3);
                if(num2 > num1){
                    printf("%d es mayor", num2);
                }
                if(num1 > num2){
                    printf("%d es mayor", num1);
                }
                if(num2 == num1){
                    printf("Los restantes son iguales");
                }
        }
    }
}