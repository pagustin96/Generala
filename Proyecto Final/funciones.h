#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/// DECLARACIÓN/PROTOTIPO DE FUNCIONES

int sumarPuntosTotal(int* vec, int tam);

int sumarPuntos(int* vec, int num);

void elegirJuego(int* vec, int* puntosRonda);

void cargarAleatorioUno(int* vec, int tam, int num);

void gotoxy(int x,int y); // limpia la pantalla desde...

void funcionX(int* vec,int tam,int n); // pide n cantidad de numeros para volver a tirar y los carga aleatoriamente en el vector

void generala(int* vec, int tam); // devuelve si hay generala

void poker(int* vec , int tam); // devuelve si hay poker

void full(int* vec, int tam); // devuelve si hay full

bool numDif(int* vec,int tam); // devuelve true si no se repiten los numeros del vector

void escalera(int* vec); // muestra si hay escalera

void mostrarJuegosDeN(int* vec);

void asignarNombre(char* str); // ingresar nombre y guardar en variable

void cargarVector(int v[], int tam);///asigna valores a cada una de las posiciones del vector

void mostrarVector(int v[], int tam);/// muestra lo que contiene cada una de las posiciones del vector

void ponerCero(int v[], int tam);/// pone en 0 todas las posiciones del vector

int posicionNumeroEnVector(int v[],int tam, int numero);/// devuelve la posición que ocupa un número que se //envía como parámetro. Devuelve la primera posición que encuentra el número. Si no lo encuentra devuelve -1

int contarNumerosRepetidos(int v[], int numero , int tam);///cuenta la cantidad de veces que se repite un //número en el vector

int maximoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el máximo en el vector

int minimoVector(int v[], int tam);///devuelve  la posición (primera) que ocupa el mínimo en el vector


void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector. EL parámetro limite establece el valor maximo posible

void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector

void copiarVector(int v[], int v2[],int tam ); ///copia el vector v en v2

bool compararVectores(int v[], int v2[],int tam );// compara los dos vectores que recibe. Si son iguales ///devuelve true, si no devuelve false

/// Desarrollo de funciones / Definiciones
int posicionNumeroEnVector(int v[],int tam, int numero){
    int i;
    for(i=0;i<tam;i++){
        if(v[i]==numero) return i;
        }
    return -1;
}
int minimoVector(int v[], int tam){
    int i, posMin=0;
    for(i=1;i<tam;i++){
        if(v[i]<v[posMin]) {
                posMin=i;
        }
    }
    return posMin;
}
void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
}


int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}


void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}


int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}


void copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESE NUMERO: ";
        cin>>v[i];
    }
}

void asignarNombre(char* str){
    rlutil::locate(40, 10);
    cout<<"Ingrese su nombre: ";
    cin>>str;
}

void mostrarJuegosDeN(int vec[]){
    int i, total;
    bool flag;
    int vJuegos[10];
    int juego1 = 1 * contarNumerosRepetidos(vec, 1, 5); //0
    int juego2 = 2 * contarNumerosRepetidos(vec, 2, 5); //1
    int juego3 = 3 * contarNumerosRepetidos(vec, 3, 5); //2
    int juego4 = 4 * contarNumerosRepetidos(vec, 4, 5); //3
    int juego5 = 5 * contarNumerosRepetidos(vec, 5, 5); //4
    int juego6 = 6 * contarNumerosRepetidos(vec, 6, 5); //5

    int y = 0;

    if(juego1 > 0){
            rlutil::locate(50, 18 + y);
        cout<<"1. Juego de 1: "<<juego1;cout<<" puntos";cout<<endl;
    y++;
    }
        if(juego2 > 0){
                rlutil::locate(50, 18 + y);
        cout<<"2. Juego de 2: "<<juego2;cout<<" puntos";cout<<endl;
        y++;
    }
        if(juego3 > 0){
                rlutil::locate(50, 18 + y);
        cout<<"3. Juego de 3: "<<juego3;cout<<" puntos";cout<<endl;
        y++;
    }
        if(juego4 > 0){
                rlutil::locate(50, 18 + y);
        cout<<"4. Juego de 4: "<<juego4;cout<<" puntos";cout<<endl;
        y++;
    }
        if(juego5 > 0){
                rlutil::locate(50, 18 + y);
        cout<<"5. Juego de 5: "<<juego5;cout<<" puntos";cout<<endl;
        y++;
    }
        if(juego6 > 0){
                rlutil::locate(50, 18 + y);
        cout<<"6. Juego de 6: "<<juego6;cout<<" puntos";cout<<endl;
        y++;
    }
    flag = numDif(vec, 5); // ------------------------------>escalera
    total = juego1 + juego2 + juego3 + juego4 + juego5 + juego6;
    if(flag == true){
        if(total == 15 || total == 20){
            rlutil::locate(50, 18 + y);
        cout<<"7. Escalera: 25 puntos;";cout<<endl;
        y++;
    }
    }
    rlutil::locate(50, 18 + y);
    full(vec, 5);
    y++;
    rlutil::locate(50, 18 + y);
    poker(vec, 5);
    y++;
    rlutil::locate(50, 18 + y);
    generala(vec, 5);

      y=0;
}

bool numDif(int* vec,int tam){
  int i, j, iguales = 0;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(vec[i]==vec[j]){
                iguales++;
            }
        }
    }
    if(iguales == tam){
        return true;
    } else {
        return false;
    }
}

void full(int* vec, int tam){ // ----------------------> full
    int total = 0, i;
    bool flag2=false, flag3=false;
      for(i=0; i<tam; i++){
int        cant = contarNumerosRepetidos(vec, vec[i], tam);
        if(i == 0){
                if(cant == 3){
                    total += cant;
                    flag3 = true;
                } else if (cant == 2) {
                    total += cant;
                    flag2 = true;
                }
        } else {
            if(cant == 3 && flag3 == false){
                    total += cant;
                    flag3 = true;
                } else if (cant == 2 && flag2 == false) {
                    total += cant;
                    flag2 = true;
                }
        }
      }
      if(total == 5) {
        cout<<"8. Full 25 puntos";cout<<endl;
      }

}

void poker(int* vec, int tam){ // -------------------------> poker
    int cant1, cant2;
    cant1 = contarNumerosRepetidos(vec, vec[0], tam);
    cant2 = contarNumerosRepetidos(vec, vec[1], tam);

    if(cant1 == 4 || cant2 == 4){
        cout<<"9. Poker 30 puntos";cout<<endl;
    }
}

void generala(int* vec, int tam){
    int cant;
    cant = contarNumerosRepetidos(vec, vec[0], 5);
    if (cant == 5){
        cout<<"10. GENERALA!!!!"<<endl;
        cout<<"GANAS LA PARTIDA"<<endl;
    }
}

 void funcionX(int* vec, int tam, int n){
     int i, m, valor;
   // int j = 0
   //srand(time(NULL));
          for(i = 1; i <= n; i++) {
                int posicion;
                rlutil::locate(85, 27);cout<<"   ";
rlutil::locate(50, 25);
cout<<"                                                ";
                rlutil::locate(50, 25);
           cout<<"que dado queres volver a tirar?... ";
           cin>>m;
           rlutil::locate(50, 27);
           cout<<"                                       ";
           cargarAleatorioUno(vec, tam,  m);
           //posicion = m;
          // valor =(rand()%6)+1;
           //vec[m-1] = (rand()%6)+1;

         //    for(j=0; j<tam; j++){ //hacer una funcion que cree solo un numero aleatorio
         //      if(vec[j] == m){
         //      vec[j] = (rand()%6)+1;
         //  }
         //   }
          }
        //  rlutil::locate(40, 14); //uso las mismas coordenadas para mostrar los valores reemplazados en la pantalla
         // mostrarVector(vec, 5);cout<<endl;

     }

void cargarAleatorioUno(int* vec, int tam, int num){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        if(num == vec[i]){
           vec[i]=(rand()%6)+1;
           }
  }
}



void elegirJuego(int* vec, int* puntosRonda){
    int n;
    bool flag = true;
    rlutil::locate(50, 25);
    cout<<"                                                         ";
    rlutil::locate(50, 25);
    cout<<"Que juego elegis?.. ";cin>>n;cout<<endl;
    while(flag == true){
        //
            switch(n){
    case 1:
        if(puntosRonda[0] == -1){
              puntosRonda[0] = sumarPuntos(vec, 1);
              flag = false;

            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 2:
            if(puntosRonda[1] == -1){
                puntosRonda[1] = sumarPuntos(vec, 2);
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 3:
        if(puntosRonda[2] == -1){
               puntosRonda[2] = sumarPuntos(vec, 3);
               flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 4:
        if(puntosRonda[3] == -1){
                puntosRonda[3] = sumarPuntos(vec, 4);
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 5:
        if(puntosRonda[4] == -1){
                puntosRonda[4] = sumarPuntos(vec, 5);
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 6:
        if(puntosRonda[5] == -1){
                puntosRonda[5] = sumarPuntos(vec, 6);
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 7:
        if(puntosRonda[6] == -1){
                puntosRonda[6] = 25;
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 8:
        if(puntosRonda[7] == -1){
                puntosRonda[7] = 30;
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 9:
        if(puntosRonda[8] == -1){
                puntosRonda[8] = 40;
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        case 10:
        if(puntosRonda[9] == -1){
                puntosRonda[9] = 50;
                flag = false;
            } else {
                rlutil::locate(50, 28);
                cout<<"                                                         ";
                rlutil::locate(50, 28);
                cout<<"No podes elegir este juego! Elegi otra opcion...";cin>>n;cout<<endl;
            }
        break;
        default:
        rlutil::locate(50, 28);
                cout<<"                                                         ";
        rlutil::locate(50, 28);
                cout<<"OPCION INCORRECTA! Elegi otra opcion...";cin>>n;cout<<endl;
        break;
    }
    }



}


int sumarPuntos(int* vec, int num){
    int i, total=0;
    for(i=0; i<5; i++){
        if(vec[i]==num){
            total += num;
        }
    }
    return total;
}

int sumarPuntosTotal(int* vec, int tam){
    int i, total=0;
    for(i=0; i<tam; i++){
            if(vec[i] != -1) {
                total += vec[i];
            }
    }
    return total;
}



/*void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);  }
*/

#endif // FUNCIONES_H_INCLUDED
