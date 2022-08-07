#include <iostream>


using namespace std;
int main() {

    int lado1, lado2, lado3;

    cout << "Ingrese el primer lado: ";
    cin>>lado1;
    cout << "Ingrese el segundo lado: ";
    cin>>lado2;
    cout << "Ingrese el tercer lado: ";
    cin>>lado3;

    if (!(lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2)) {
        cout << "Los numeros ingresados NO forman un triangulo." << endl;
    }else{
        cout << "Los numeros ingresados forman un triangulo." << endl;

        Triangulo triangulo1(lado1,lado2,lado3);
        triangulo1.mostrarTipo();
     }

    return 0;
}
