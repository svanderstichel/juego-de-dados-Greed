#include <iostream>
#include <string>
#include "estadistica.h"

using namespace std;

void estadisticas(string &jugadorTop, int &puntajeTop)
{

    if(puntajeTop>0)
    {
        system("cls");
        cout << endl << "El jugador con el puntaje mas alto fue: " << jugadorTop << endl;
        cout << "Cantidad de puntos: " << puntajeTop << endl << endl;
    }
    return;
}

void verificarEstadisticas(string jugador, int puntaje, string &jugadorTop, int &puntajeTop){

    if(puntaje>puntajeTop)
    {
        jugadorTop = jugador;
        puntajeTop = puntaje;

        system("cls");
        cout << "Felicitaciones <" << jugadorTop << "> has alcanzado el puntaje mas alto del juego con " << puntajeTop << " puntos!" << endl;
        cout << endl << "Tu logro quedara registrado en las estadisticas." << endl;
        cout << endl;

    }

}
