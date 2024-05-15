#include <iostream>
using namespace std;
int main(){

    double Angulo,Angulo1,Angulos,Total;
    cout << "Para obtener el ultimo algulo de un triangulo, ingrese el primer angulo: ";
    cin >> Angulo ;

    cout << "Ingrese el segundo angulo: ";
    cin >> Angulo1;

    Angulos = Angulo+Angulo1;

    if(Angulos > 180 ){
        cout << "Los Angulos son erroneos.";
    }

    else if(Angulos < 180){
    
    Total= 180-Angulos;

    cout << "Su angulo faltante es de: " << Total << " Grados" << endl;
    }

    
    return 0; 
}