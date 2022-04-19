/* Diseñe un programa capaz de permitir el ingreso de 3 valores, calcular su promedio y que
muestre aquellos valores mayores o iguales al promedio. */

#include "iostream"
using namespace std;
  main (){
float num1, num2, num3;
float promedio;

cout << "Ingrese primer valor" ;
cin >> num1;
cout << "Ingrese segundo valor";
cin >> num2;
cout << "Ingrese tercer valor";
cin >> num3;

promedio = (num1 + num2 + num3) / 3; 
cout <<  "El promedio es: " << promedio;

if(num1 > promedio){
  cout << num1 << ", es mayor al promedio ";
};
if(num2 > promedio){
  cout << num2 << ", es mayor al promedio ";
};
if(num3 > promedio){
  cout << num3 << ", es mayor al promedio ";
};
system("pause");
 }

