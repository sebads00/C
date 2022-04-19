#include <stdio.h>
#include <string.h>
#include <conio.h>

main(){
    char letra;
    
    printf("Ingrese una letra ");
    
    letra = getch();

    switch (letra)
    {
    case 'a':
        printf("Es vocal");
        break;
    case 'e':
        printf("Es vocal");
        break;
    case 'i':
        printf("Es vocal");
        break;
    case 'o':
        printf("Es vocal");
        break;
    case 'u':
        printf("Es vocal");
        break;
    
    default:
        printf("Es consonante");
        break;
    }

}