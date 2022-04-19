/* Confeccione un programa que permita el ingreso de tres valores numéricos y los muestre
ordenados en forma ascendente menor a mayor */

#include "iostream"
using namespace std;

main (){
    int num1, num2, num3;
    cout << "Ingrese numero 1";
    cin >> num1;
    cout << "Ingrese numero 2";
    cin >> num2;
    cout << "Ingrese numero 3";
    cin >> num3;


    if(num1 <= num2 && num1 <= num3){
        if(num2 <= num3)
            cout << num1 << num2 << num3;
        else 
            cout << num1 << num3 << num2;
    
    }else if(num2 <= num1 && num2 <= num3){
        if(num1 <= num3)
            cout << num2 << num1 << num3;
        else
            cout << num2 << num3 << num1;

    }else if(num3 <= num1 && num3 <= num2)
        if(num1 <= num2)
            cout << num3 << num1 << num2; 
        else 
            cout << num3 << num2 << num1;

system ("pause");

}