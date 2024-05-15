#include <iostream>
using namespace std;
int main(){

    int tipoMotor;
    cout << "Ingrese un numero del 0 al 4 para saber el tipo de bomba: ";
    cin >> tipoMotor;

    switch(tipoMotor){

        case 0:
        cout << tipoMotor <<  " No esta establecido un valor definido para el tipo de bomba" << endl;
        break;

        case 1:
        cout << tipoMotor <<  " La bomba es una bomba de agua" << endl;
        break;

        case 2:
        cout << tipoMotor <<  " La bomba es una bomba de gasolina" << endl;
        break;

        case 3:
        cout << tipoMotor <<  " La bomba es una bomba de hormigon" << endl;
        break;

        case 4:
        cout << tipoMotor <<  " La bomba es una bomba de pasta alimenticia" << endl;
        break;

        default:
        cout << tipoMotor <<  " No existe un valor valido para el tipo de bomba" << endl;
        break;

    }

    return 0;
}