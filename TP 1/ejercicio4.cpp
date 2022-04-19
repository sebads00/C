/* Diseñe el algoritmo que permita ingresar dos valores y restarlos entre sí, de tal manera
que arroje siempre un resultado positivo (>=0). */

#include "iostream"
using namespace std;

main(){
    float num1, num2, resultado;
    cout << "Ingrese un valor";
    cin >> num1;
    cout << "Ingrese un valor";
    cin >> num2;

    resultado = num1 - num2;
    if(resultado >= 0){
        cout << "Resultado" << resultado;
    }
    system("pause");
}