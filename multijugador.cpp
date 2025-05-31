#include <iostream>
#include <string>
#include "multijugador.h"
#include "ronda.h"
#include "estadistica.h"
using namespace std;

void multijugador(string &jugadorTop, int &puntajeTop)
{

    string nombreJ1;
    string nombreJ2;
    string nombreGanador;
    int puntajeJ1 = 0;
    int puntajeJ2 = 0;
    int puntajeGanador = 0;

    system("cls");
    cout << "Ingrese el nombre del Jugador numero 1: ";
    cin >> nombreJ1;

    cout << "Ingrese el nombre del Jugador numero 2: ";
    cin >> nombreJ2;


    for(int i=1; i<=3; i++)
    {

        ///inicia ronda jugador 1
        system("cls");
        cout << "INICIA RONDA " << i << " de " << nombreJ1 << endl;
        system("pause");
        puntajeJ1 += ronda(i,nombreJ1,puntajeJ1);


        ///inicia ronda jugador 2
        system("cls");
        cout << "INICIA RONDA " << i << " de " << nombreJ2 << endl;
        system("pause");
        puntajeJ2 += ronda(i,nombreJ2,puntajeJ2);
    }

    ///definir ganador
    if(puntajeJ1>puntajeJ2){
        nombreGanador = nombreJ1;
        puntajeGanador = puntajeJ1;
    } else {
        nombreGanador = nombreJ2;
        puntajeGanador = puntajeJ2;
    }

    ///puntaje final
    system("cls");
    cout << "PUNTUAJE FINAL" << endl << endl;
    cout << "<" << nombreJ1 << "> " << puntajeJ1 << " puntos" <<  endl;
    cout << "<" << nombreJ2 << "> " << puntajeJ2 << " puntos" << endl;
    cout << endl;
    cout << "GANADOR: " << nombreGanador << "!!!" << endl << endl;
    system("pause");


    verificarEstadisticas(nombreGanador,puntajeGanador,jugadorTop,puntajeTop);




    return;
}
