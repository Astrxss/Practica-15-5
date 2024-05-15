#include <iostream>
using namespace std;
int main(){
    string Age;

    int Edad;
    cout << "Inserta tu edad: ";
    cin >> Edad;

    if (Edad >= 18){
        Age = "Mayor de edad.";}
    else if(Edad < 18){
        Age = "Menor de edad.";}

        cout << "Usted es " << Age << endl;

        return 0;
}