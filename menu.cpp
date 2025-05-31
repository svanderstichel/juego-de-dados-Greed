#include <iostream>
#include "menu.h"
#include "solitario.h"
#include "multijugador.h"
#include "estadistica.h"
#include "creditos.h"

using namespace std;

int menu()
{
    int opcion;


    cout << "GREED" << endl;
    cout << "-----------------------" << endl;
    cout << "1 - MODO UN JUGADOR" << endl;
    cout << "2 - MODO DOS JUGADORES" << endl;
    cout << "3 - ESTADISTICAS" << endl;
    cout << "4 - CREDITOS" << endl;
    cout << "-----------------------" << endl;
    cout << "0 - SALIR" << endl;
    cout << endl;
    cout << "Ingrese una opcion... ";

    cin >> opcion;

    return opcion;
};

void seleccionarOpcion(int opcion, std::string &jugadorTop, int &puntajeTop)
{
    switch(opcion)
    {
    case 1:
        solitario(jugadorTop, puntajeTop);
        system("pause");
        break;
    case 2:
        multijugador(jugadorTop, puntajeTop);
        system("pause");
        break;
    case 3:
        estadistica(jugadorTop, puntajeTop);
        system("pause");
        break;
    case 4:
        creditos();
        system("pause");
        break;
    case 0:
        cout << endl << "Gracias por probar nuestro juego!" << endl;
        system("pause");
        break;
    default:
        cout << endl << "Incorrecto. Ingrese una opcion valida." << endl;
        system("pause");
        system("cls");
        menu();
    }
}

