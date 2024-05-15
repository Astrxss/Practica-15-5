#include <iostream>
using namespace std;
int main(){
    string nombre;
    cout << "ingrese su nombre: ";
    cin >> nombre;

    double Cor1,Cor2,Par1,Par2,Lab,Proy,Nota;
    cout << "Ingrese la nota del Corto 1: ";
    cin >> Cor1;
    Cor1 = Cor1*10/100;

    cout << "Ingrese la nota del Corto 2: ";
    cin >> Cor2;
    Cor2 = Cor2*10/100; 

    cout << "Ingrese la nota del Parcial 1: ";
    cin >> Par1;
    Par1 = Par1*15/100;

    cout << "Ingrese la nota del Parcial 2: ";
    cin >> Par2;
    Par2 = Par2*20/100;

    cout << "Ingrese la nota del Laboratorio: ";
    cin >> Lab;
    Lab = Lab*20/100;

    cout << "Ingrese la nota del Proyecto: ";
    cin >> Proy;
    Proy = Proy*25/100;

    Nota = Cor1+Cor2+Par1+Par2+Lab+Proy;

    if (Nota > 6 ){

        cout << nombre << " Felicidades a pasado con un: " << Nota << endl;
    }
    else if (Nota < 6){

        cout << nombre << " Lamento informarle que no ha pasado, Su nota es de: " << Nota << endl;
    }

    return 0;


}