#include <iostream>
#include "funcionesDados.h"
using namespace std;

void mostrarDados(int vecDado[], int tamanio) {
    for(int i = 0; i<tamanio; i++) {
        cout << "Dado Bloqueador" << " nø " << i + 1 << ": " << vecDado[i]<< endl;
    }
}

int tirada(int &dadosTam, int dadosBloqueados[], bool &tiradaDoble){
    int dadosTirados[dadosTam]{};
    int puntajeDeTirada = 0;
    int contadorDadosRestados = 0;
    int dadosTamTMP = dadosTam;

    for(int i=0; i<dadosTamTMP; i++) {
        dadosTirados[i] = tirarDado(); //CAMBIE ACA Y TENGO QUE DEVOLVER TIRARDADO()

        cout << "\t[" << dadosTirados[i] <<"]";


        puntajeDeTirada = puntajeDeTirada + dadosTirados[i];

        //verifica si fuiste bloqueado
        if(dadosBloqueados[0] == dadosTirados[i] || dadosBloqueados[1] == dadosTirados[i]) {
            puntajeDeTirada = puntajeDeTirada - dadosTirados[i];
            contadorDadosRestados = contadorDadosRestados + 1;
        }

       // cout << dados[i] << endl;
    }


    //Resta los dados que fueron interceptados por el bloqueados
    dadosTam = dadosTam - contadorDadosRestados;
    if(dadosTam <= 0) {
        return 0;
    }

    if(todosDadosIguales(dadosTirados,dadosTamTMP)){
        int total = 0;
        for(int i=0; i < dadosTamTMP; i++) {
            total = total + dadosTirados[i];
        }

        cout << endl << "SACASTE UNA TIRADA DOBLE!!" << endl;

        tiradaDoble = 1;
        total = total + total;
        return total;
    }

    return puntajeDeTirada;
}



int tirarDado() {
    int dado = 0;
    dado = rand() % 6 + 1;
    return dado;
}

void dadosBloq(int dadosBloqueados[]) {
    // Se obtiene los dados que van a ser bloqueados
    for(int i=0; i<2 ; i++) {
        dadosBloqueados[i] = tirarDado();
    }
}

bool todosDadosIguales(int vectorDados[], int cantidadDados) {
    for (int i = 0; i < cantidadDados; i++) {
        if (vectorDados[i] != vectorDados[0]) {
            return false;  // Salimos del bucle si encontramos un valor diferente
        }
    }
    return true;
}
