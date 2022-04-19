/* Diseñe un algoritmo que permita Ingresar una nota y categorizarla de la siguiente manera:
si está comprendida entre 0 y 2 inclusive, mostrar “Muy deficiente”; si es mayor que dos y
menor o igual que 4, mostrar “Insuficiente”; si está comprendida entre 5 y 7, mostrar
“Bueno”; si es mayor que 7 y menor o igual a 9,50, mostrar “Notable”; si está
comprendida entre 9,51 y 10, mostrar “Sobresaliente”; si se encuentra fuera de estos
rangos, mostrar “Error al ingresar nota” */

#include <iostream>
using namespace std;

main(){
float nota;
cout << "Ingrese nota";
cin >> nota;

if (nota > 0  && nota < 2 ){
    cout << "Muy deficiente";
}if(nota > 2 && nota <= 4){
    cout << "Insuficiente";
}if(nota > 5 && nota <= 7){
    cout << "Bueno";
}if (nota > 7 && nota <= 9.50){
    cout << "Notable";
}if (nota > 9.50 && nota <= 10){
    cout << "Sobresaliente";
}if (nota > 10 || nota < 0){
    cout << "Error al ingresar la nota";
}

}
