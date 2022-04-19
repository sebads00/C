/* 6.	Crear un programa que permita:

a)	ingresar día, mes y año actual
b)	ingresar día, mes y año de nacimiento
c) determinar la edad
 */

#include <stdio.h>

main(){
    int diaN, mesN, anioN, diaA, mesA, anioA, edad;

    printf("Ingrese dia de nacimiento");
    scanf("%d", &diaN);

    printf("Ingrese mes de nacimiento");
    scanf("%d", &mesN);
    
    printf("Ingrese anio de nacimiento");
    scanf("%d", &anioN);
    
    printf("Ingrese dia actual");
    scanf("%d", &diaA);
    
    printf("Ingrese mes actual");
    scanf("%d", &mesA);
    
    printf("Ingrese anio actual");
    scanf("%d", &anioA);

    edad = anioA - anioN;

    if(mesN < mesA){
        printf("Tiene %d", edad);
    }
    if(mesN > mesA){
        printf("Tiene %d", edad - 1);
    }   
    if(mesN == mesA){
        if(diaN < diaA){
            printf("Tiene %d", edad);
        }else 
            printf("Tiene %d", edad - 1);
    }
  
    
}