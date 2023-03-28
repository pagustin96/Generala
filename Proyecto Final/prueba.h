#ifndef PRUEBA_H_INCLUDED
#define PRUEBA_H_INCLUDED

void punto1();
void punto2();
void punto3();

///

void punto1(){
    int op=0, rondas;
    int puntos = 0; // aca tengo el total de puntos
    int puntosRonda[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; // aca se va almacenando los puntajes
    int puntaje[10] = {0,0,0,0,0,0,0,0,0,0};
    int vec[5]; // ESTE VECTOR TIENE LOS VALORES DE LOS DADOS
    char nombre[15];
    asignarNombre(nombre);
    rlutil::locate(50, 10);
    cout<<"Su nombre es: "<<nombre<<endl;
    system("cls");
    rlutil::locate(35, 10);
    cout<<nombre;cout<<" ingresa la cantidad de rondas que deseas jugar: ";cin>>rondas;
    system("cls");
    rlutil::locate(50, 10);
    cout<<"COMIENZA EL JUEGO!!!"<<endl<<endl<<endl<<endl<<endl;
    system("pause");
    system("cls");


    while(op !=rondas){ // -------------------------> while
system("cls");
int opTurnos = 1; // ------------------------------> while interior para turnos
   // cargarVector(vec, 5);
   cargarAleatorio(vec, 5, 6); //funcion para tirar los dados

   rlutil::locate(50, 9);
   cout<<"PUNTAJE: ";cout<<puntos;cout<<endl;
    rlutil::locate(50, 10);
    cout<<"Ronda numero: "<<op+1<<endl;
    rlutil::locate(50, 11);
    cout<<"Su tirada es: "<<endl;
    rlutil::locate(40, 14);
    mostrarVector(vec, 5);cout<<endl;  // muestro los dados en pantalla
    ordenarVector(vec, 5);
    rlutil::locate(39, 16);
    cout<<"---------- Juegos disponibles ----------"<<endl;
    rlutil::locate(41, 18);
    mostrarJuegosDeN(vec); // muestro los juegos que hay del 1 al 6 , escalera y full


   while(opTurnos < 4) {
   system("cls");

  int n;
  char respuesta;

  rlutil::locate(50, 9);
   cout<<"PUNTAJE: ";cout<<puntos;cout<<endl;
    rlutil::locate(50, 10);
    cout<<"Ronda numero: "<<op+1<<endl;
    rlutil::locate(50, 11);
    cout<<"Su tirada es: "<<endl;
    rlutil::locate(40, 14);
    mostrarVector(vec, 5);cout<<endl;  // muestro los dados en pantalla
    ordenarVector(vec, 5);
    rlutil::locate(39, 16);
    cout<<"---------- Juegos disponibles ----------"<<endl;
    rlutil::locate(41, 18);
    mostrarJuegosDeN(vec); // muestro los juegos que hay del 1 al 6 , escalera y full

    rlutil::locate(50, 25);
    cout<<nombre;cout<<" queres volver a tirar (S/N)?... ";cin>>respuesta;cout<<endl;

     if(respuesta == 's' || respuesta == 'S'){    //hacerlo con switch en un futuro
    rlutil::locate(50, 25);
    cout<<"                                                                ";
    rlutil::locate(50, 25);
   // rlutil::locate(92, 26);
    cout<<"Muy bien! cuantos dados queres volver a tirar?... ";cin>> n;
    rlutil::locate(50, 25);
    cout<<"                                                                ";

                 funcionX(vec, 5, n);

                 rlutil::locate(40, 14);
                 cout<<"                         ";
                 rlutil::locate(40, 14);
                 mostrarVector(vec, 5);cout<<endl;

                 rlutil::locate(50, 18);
                 cout<<"                         ";
                 rlutil::locate(50, 19);
                 cout<<"                         ";
                 rlutil::locate(50, 20);
                 cout<<"                         ";
                 rlutil::locate(50, 21);
                 cout<<"                         ";
                 rlutil::locate(50, 22);
                 cout<<"                         ";
                 rlutil::locate(50, 23);
                 cout<<"                         ";
                 rlutil::locate(50, 24);
                 cout<<"                         ";



                 rlutil::locate(41, 18);
                 mostrarJuegosDeN(vec);

                 rlutil::locate(50, 25);
                 cout<<"                                      ";
                 rlutil::locate(50, 26);
                 cout<<"                                                 ";cout<<endl;cout<<endl;


if(opTurnos == 3) {
  elegirJuego(vec, puntosRonda);
  puntos = sumarPuntosTotal(puntosRonda, 10);

  system("cls");
}
opTurnos++;
     } // aca termina el if sS

     else {

    // ACA DEBERIA SUMAR TODOS LOS VALORES PARA PASAR AL OTRO TURNO... previamente elegir que juego voy a tachar
    elegirJuego(vec, puntosRonda);
    puntos = sumarPuntosTotal(puntosRonda, 10); // aca sumo los puntos que tengo en el vector
    // ACA TENGO QUE LIMPIAR LA PANTALLA Y ACTUALIZAR LOS PUNTOS






system("cls");
opTurnos = 4;
    }
    system("pause");
    } // aca termina el while

op++;

} // termina el while
system("cls");
rlutil::locate(50, 10);
    cout<<"JUEGO TERMINADO!!!";
    rlutil::locate(50, 11);
    cout<<"SU PUNTAJE ES: ";cout<<puntos;cout<<endl;

    rlutil::locate(50, 13);
    cout<<"GRACIAS POR JUGAR";
} // termina la funcion 1 jugador




/*
void punto1(){
    int vec[10], posMax,maximo,cantRepetido;
    cargarVector(vec,10);
    posMax=maximoVector(vec,10);
    maximo=vec[posMax];
    cout<<"MAXIMO DEL VECTOR: "<<maximo<<endl;
    cout<<"LA PRIMERA POSICION DEL VALOR MAXIMO ES: "<<posMax<<endl;
    cantRepetido=contarNumerosRepetidos(vec,maximo,10);
    cout<<"EL MAXIMO SE REPITE: "<<cantRepetido<<endl;
}

*/





void punto2(){
    int vec[10], posMin,minimo,cantRepetido;
    cargarVector(vec,10);
    posMin=minimoVector(vec,10);
    minimo=vec[posMin];
    cout<<"MINIMO DEL VECTOR: "<<minimo<<endl;
    cout<<"LA PRIMERA POSICION DEL VALOR MINIMO ES: "<<posMin<<endl;
    cantRepetido=contarNumerosRepetidos(vec,minimo,10);
    cout<<"EL MINIMO SE REPITE: "<<cantRepetido<<endl;
}
void punto3(){
    int vec[5], suma, i,vRepetidos[6];
    cargarAleatorio(vec,5,10);
    suma=sumarVector(vec,5);
    mostrarVector(vec,5);
    cout<<endl;
    cout<<"SUMA DE LOS VALORES CONTENIDOS EN EL VECTOR: "<<suma<<endl;
    for(i=1;i<=6;i++){
        vRepetidos[i-1]=contarNumerosRepetidos(vec,i,5);
    }
    mostrarVector(vRepetidos,6);
    cout<<endl;

}

#endif // PRUEBA_H_INCLUDED
