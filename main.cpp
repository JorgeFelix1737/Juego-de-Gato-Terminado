// Jorge Félix Muñoz - Juego de Gato - ID: 00682564
#include <iostream>
#include <time.h> //para generar un numero aleatorio
using namespace std;
void loop(char c[3][3]);
void Intro_Primera (char c [3][3]);
void tablero (char c[3][3]);
void Intro_Yo (char c[3][3]);
void Intro_IA(char c[3][3]);
int ganador (char c[3][3]);
int main()
{
    char c [3][3];
    //Llama a todas las funciones fundamentales y refrezca la pantalla
    loop (c);
}

void loop (char c[3][3])
{
    int i,j;

    i = 0;

        Intro_Primera (c);
        tablero (c);
    do{
        system ("cls");
        tablero (c);
        if (i %2 == 0){
            Intro_Yo (c);
        }
        else {
            Intro_IA (c);
        }
        j = ganador(c);
        i++;
    }while(i<=8 && j==2);

    system ("cls");
        tablero (c);

    if (j == 0){
        cout << "Has Ganado!!!" << endl;
    }
    else if(j == 1){
        cout << "Has perdido :(" << endl;
    }
    else if (j == 2){
        cout << "Has empatado, intenta de nuevo..." << endl;
    }
}
void Intro_Primera (char c[3][3])
{
    int i, j;
    char aux;

    aux = '1';

    for (i = 0; i < 3; i++){
       for (j = 0; j < 3; j++){
         c [i][j] = aux++;
       }
    }
}
void tablero (char c[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++){
       for (j = 0; j < 3; j++){
          if (j < 2){
            cout << " " << c[i][j] << " |";
          }
          else{
            cout << " " << c[i][j];
          }
       }

      if (i < 2){
        cout << endl << "------------" << endl;
      }
    }
   cout << endl << endl;
}
void Intro_Yo (char c[3][3])
{
 int i,j,k;
 char aux;
    do{
        do{
           cout << "Coloca tu ficha presionando el numero correspondiente: ";
           fflush (stdin); //limpia los archivos basura que pueda haber en el programa
           cin >> aux;
        } while (aux < '1'|| aux > '9');

        k = 0;

      switch (aux){
        case '1': {
            i=0;
            j=0;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
        }
          case '2': {
            i=0;
            j=1;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '3': {
            i=0;
            j=2;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '4': {
            i=1;
            j=0;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '5': {
            i=1;
            j=1;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '6': {
            i=1;
            j=2;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '7': {
            i=2;
            j=0;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '8': {
            i=2;
            j=1;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
          break;
          }
          case '9': {
            i=2;
            j=2;
            if (c[i][j] == 'X'|| c[i][j] == 'O'){
                k = 1;
                cout << "La casilla esta ocupada! Intenta otro numero..." << endl << endl;
            }
        break;
            }

        }
    } while (k == 1);

    c[i][j] = 'X';
}

void Intro_IA(char c[3][3])
{
    int i,j,k;
    char aux;
        srand (time(nullptr));
            do{
                i = rand() %3;
                j = rand() %3;
                k = 0;

                if (c[i][j] == 'X'|| c[i][j] == 'O'){
                    k = 1;
                }
            }while (k == 1);
        c[i][j] = 'O';

}

int ganador (char c[3][3])
{

    if(c[0][0] == 'X'|| c[0][0] == 'O'){
        if(c[0][0] == c[0][1] && c[0][0] == c[0][2]){
            if(c[0][0] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
        if(c[0][0] == c[1][0] && c[0][0] == c[2][0]){
            if(c[0][0] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
    }

    if(c[1][1] == 'X' || c[1][1] == 'O'){
        if(c[1][1] == c[0][0] && c[1][1] == c[2][2]){
            if(c[1][1] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
        if(c[1][1] == c[1][0] && c[1][1] == c[1][2]){
            if(c[1][1] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
        if(c[1][1] == c[2][0] && c[1][1] == c[0][2]){
            if(c[1][1] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
        if(c[1][1] == c[0][1] && c[1][1] == c[2][1]){
            if(c[1][1] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
    }
    if(c[2][2] == 'X' || c[2][2] == 'O'){
        if(c[2][2] == c[2][0] && c[2][2] == c[2][1]){
            if(c[2][2] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }


        if(c[2][2] == c[0][2] && c[2][2] == c[1][2]){
            if(c[2][2] == 'X'){
                return 0; //Yo gano
            }
            else {
                return 1; //Yo pierdo
            }
        }
    }
return 2;
}
