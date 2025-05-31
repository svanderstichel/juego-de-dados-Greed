#include <iostream>
#include "graficos.h"
using namespace std;

void mostrarBloqueados(int dadosBloqueados[]){
    for (int i = 0; i < 2; i++) {
        cout << "DADO BLOQUEADO " << i + 1 << ": " << dadosBloqueados[i] << endl;
    }
}


void graficoMarcadoRonda(int numRonda) {
        cout << endl;
        cout << endl;
        cout << "---------------- Ronda numero " << numRonda << " ----------------" << endl;
        cout << endl;
        cout << endl;
}

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






