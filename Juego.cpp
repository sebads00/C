#include <stdlib.h>
#include <iostream>
using namespace std;
#include <time.h>

const int PI = 0;
const int PA = 1;
const int TI = 2;


main (){

    int pj = 0, pjMaq = 0, cantJuegos = 0, i, jugador;
    
    cout << "Ingrese cantidad de juegos ";
    cin >> cantJuegos;
cout << "Usted: " << pj << "puntos" << endl;
    cout << "Maquina: " << pjMaq << "puntos" << endl;
    srand(time(NULL));
    for(i = 1; i <= cantJuegos; i++)
     
    {
        do{
            cout << "Ingese su jugada ";
            cin >> jugador;
        }while(jugador < 0 || jugador > 2);

        int juegoMaq = rand()%2;

        cout << "Usted eligio " << endl;
        switch(jugador){
            case PI: cout << "Piedra" << endl;
                switch(juegoMaq){
                    case PA: pjMaq ++;break;
                    case TI: pj ++;break;
                }; break;
            
            case PA: cout << "Papel" << endl; 
            switch(juegoMaq){
                    case PI: pj ++;break;
                    case TI: pjMaq ++;break;
                };break;
            
            case TI: cout << "Tijera" << endl; 
            switch(juegoMaq){
                    case PI: pjMaq ++;break;
                    case PA: pj ++;break;
                };break;
        }

        cout << "Maquina eligio"  << endl;
         switch(juegoMaq){
            case PI: cout << "Piedra" << endl; break;
            case PA: cout << "Papel" << endl; break;
            case TI: cout << "Tijera" << endl; break;
        }
    
    cout << "Usted: " << pj << "puntos" << endl;
    cout << "Maquina: " << pjMaq << "puntos" << endl;
    }
      cout << "Usted: " << pj << "puntos" << endl;
    cout << "Maquina: " << pjMaq << "puntos" << endl;
    if(pj > pjMaq){
        cout << "Victoria";
    }if(pj == pjMaq){
        cout << "Empate";
    }if(pj < pjMaq){
        cout << "Derrota";
    }
    

system("pause");
    }
    