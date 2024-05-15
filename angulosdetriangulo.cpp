#include <iostream>
using namespace std;
int main(){

    string Angulo1;

    int Angulo;
    cout << "Ingrese un angulo para saber si es, agudo, obtuso o recto: ";
    cin >> Angulo;

    if (Angulo == 90){
        Angulo1 = "Angulo es Recto";}
    else if(Angulo < 90){
        Angulo1 = "Angulo es Agudo";}
    else if(Angulo > 90){
        Angulo1 = "Angulo es Grave";}

        cout <<"Su " << Angulo1 << endl;

    return 0;
}