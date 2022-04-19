/* Confeccione el algoritmo que permita determinar la condición de regularidad de un
alumno, ingresando tres calificaciones. Si el promedio de las mismas es superior o igual a
7, la condición final será “Regular”; si el promedio es menor a 7 y superior o igual a 4, la
condición será “No regular”; menor a 4, “Recursante” */

#include "iostream"
using namespace std;

main() {
    int nota1, nota2, nota3;
    float promedio;

    cout << "Ingrese nota 1";
    cin >> nota1;
    cout << "Ingrese nota 2";
    cin >> nota2;
    cout << "Ingrese nota 3";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    if(promedio >= 7){
        cout << "Regular";
    }else if(promedio < 7 && promedio >= 4){
        cout << "No regular";
    }else{
        cout << "Recursante";
    }
}