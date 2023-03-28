#include <iostream>
#include <cstring>
#include <cstdlib>
#include<cstdio>
#include<ctime>
#include<windows.h>
#include "rlutil.h"

using namespace std;

#include "funciones.h"
#include "prueba.h"
#include "puntMax.h"

int main(){
    int opc;
    while(true){
        system("cls");
        rlutil::locate(50, 10);
        cout<<"--- MENU GENERALA ---"<<endl;
        rlutil::locate(50, 11);
        cout<<"1. Un jugador"<<endl;
        rlutil::locate(50, 12);
        cout<<"2. Dos jugadores"<<endl;
        rlutil::locate(50, 13);
        cout<<"3. Puntuacion maxima"<<endl;
        rlutil::locate(50, 14);
        cout<<"0. FIN DEL PROGRAMA"<<endl;
        rlutil::locate(50, 15);
        cout<<"-----------------------"<<endl;
        rlutil::locate(50, 16);
        cout<<"OPCION: ";
        rlutil::locate(50, 17);
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: punto1();
                    break;
            case 2: punto2();
                    break;
            case 3: punto3();
                    break;
            case 0:
                rlutil::locate(50, 10);
                cout<<"PROGRAMA FINALIZADO"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    return 0;
                    break;
            default:cout<<"OPCION INCORRECTA"<<endl<<endl<<endl;
        }

        system("pause");
    }
    return 0;
}
