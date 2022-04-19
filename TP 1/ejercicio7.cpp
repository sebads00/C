/* Confeccione el algoritmo que permita determinar cuál es el mayor de tres valores
ingresados. */
#include "iostream"
using namespace std;

main (){
int num1, num2, num3;

cout << "Ingrese numero 1 ";
cin >> num1;
cout << "Ingrese numero 2 ";
cin >> num2;
cout << "Ingrese numero 3 ";
cin >> num3;

if(num1 > num2 && num1 > num3)
        cout << "El mayor es: " <<num1;

if(num2 > num3 && num2 > num1)
        cout << "El mayor es: " <<num2;

if(num3 > num2 && num3 > num1)
        cout << "El mayor es: " <<num3;
}
