/* Ingresar dos números, sumarlos e imprimir el resultado. Si dicho resultado es igual a cero,
finalizar el tratamiento sin imprimir. */

#include "iostream"
using namespace std;


main (){
    
    float numero1, numero2, resultado;

    cout << "Ingrese primer numero"<<endl;
    cin >> numero1;
    cout << "Ingrese segundo numero"<<endl;
    cin >> numero2;
    resultado = numero1 + numero2;
    if(resultado != 0){
        cout << resultado;
    }
    system("pause");
}