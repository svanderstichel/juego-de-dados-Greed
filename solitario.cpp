#include <iostream>
#include <string>
#include "solitario.h"
#include "ronda.h"
#include "estadistica.h"
using namespace std;

void solitario(string &jugadorTop, int &puntajeTop)

{

    string nombreJ1;
    int puntajeJ1 = 0;

    system("cls");
    cout << "Ingrese el nombre del Jugador: ";
    cin >> nombreJ1;


    for(int i=1; i<=3; i++)
    {

        ///iniciar ronda
        system("cls");
        cout << "INICIA LA RONDA " << i << " de " << nombreJ1 << endl << endl;
        system("pause");

        puntajeJ1 += ronda(i,nombreJ1,puntajeJ1);
        cout << endl;
        system("pause");


    }

    ///puntaje final
    system("cls");
    cout << "PUNTUAJE FINAL" << endl << endl;
    cout << "<" << nombreJ1 << "> " << puntajeJ1 << " puntos" <<  endl << endl;
    system("pause");

    verificarEstadisticas(nombreJ1,puntajeJ1,jugadorTop,puntajeTop);


    return;
}
