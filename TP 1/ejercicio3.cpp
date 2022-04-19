/* Confeccione el programa que permita ingresar dos números, y determine cual de ellos es
el mayor. */

#include "iostream"
using namespace std;

main (){
    float num1, num2;
    cout << "ingrese primer numero";
    cin >> num1;
    cout << "ingrese segundo numero";
    cin >> num2;

    if(num1 > num2){
        cout << "El numero " << num1 << "es mayor";
    }else {
        cout << "El numero " << num2 << "es mayor";
    }
    system("pause");
}