#include <iostream>
#include <string>
#include "funcionesDados.h"
#include "ronda.h"
#include "graficos.h"
using namespace std;


int ronda(int numeroRonda, string nombreJugador, int puntajeJugador)
{
    int dadosCant = 5;
    int dadosBloqueados[2] {};
    int puntajeRonda = 0;
    char terminarRonda;
    bool tiradaDoble = 0;

    ///definir dados bloqueados
    system("cls");
    cout << "Tirando dados bloqueados..." << endl;
    dadosBloq(dadosBloqueados);
    cout << endl << "\t[" << dadosBloqueados[0] << "]\t[" << dadosBloqueados[1] << "]";
    cout << endl << endl;
    system("pause");




    do
    {

        int tmpPuntaje = 0;
        tiradaDoble = 0;

        ///interfaz de juego
        system("cls");
        cout << "RONDA " << numeroRonda << endl;
        cout << endl << "PUNTOS" <<endl;
        cout << "<" << nombreJugador << ">" << "\t\tRONDA: " << puntajeRonda;
        cout << "\t\tTOTAL: " << puntajeJugador+puntajeRonda;
        cout << endl << "=================================================" << endl;
        cout << endl << "BLOQUEADOS: [" << dadosBloqueados[0] << "] [" << dadosBloqueados[1] << "]";
        cout << endl << endl;
        cout << "Presione una tecla para tirar los dados...";
        system("pause>nul");
        cout << endl << endl << endl;


        ///tirada
        tmpPuntaje = tirada(dadosCant, dadosBloqueados, tiradaDoble);
        puntajeRonda += tmpPuntaje;


        ///verificar  cantidad de dados
        if(dadosCant <= 0)
        {
            system("cls");
            cout << "Te quedaste sin dados, fuiste demasiado codicioso." << endl << endl;
            system("pause");

            return 0;
        }


        cout << endl << endl << endl << endl;
        cout << "PUNTAJE DE TIRADA: " << tmpPuntaje << endl;
        cout <<"DADOS RESTANTES: " << dadosCant << endl;

        ///input para terminar el WHILE
        if (tiradaDoble == 0)
        {
            cout << endl << "Desea continuar arriesgando? cuidado! la codicia es un pecado (s/n): " ;
            cin >> terminarRonda;
        }
    }
    while (terminarRonda != 'n' || tiradaDoble == 1);


    return puntajeRonda;
}





