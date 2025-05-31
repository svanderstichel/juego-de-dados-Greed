#include <iostream>
#include "graficos.h"
#include "solitario.h"
#include "multijugador.h"
#include "estadistica.h"
#include "creditos.h"
using namespace std;

void iniciarJuego()
{

    int opcion;
    string jugadorTop;
    int puntajeTop=0;

    ///Estructura principal del programa
    do
    {
        system("cls");

        opcion = menu();

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
            estadisticas(jugadorTop, puntajeTop);
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
        };
    }
    while (opcion != 0);


    return;
}
