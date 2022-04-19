/* Ingrese un número y, sólo en el caso que éste sea par, muestre el mensaje “Ingresó un
número par” */

#include "iostream"
using namespace std;

main () {
    int numero;
    cout << "Ingrese un numero"<<endl;
    cin >> numero;

    if (numero % 2 == 0){
        cout << "ingreso numero par";
    }

    system("pause");
}