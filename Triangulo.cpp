//
// Created by braian on 07/08/2022.
//

#include "Triangulo.h"
#include <iostream>



Triangulo::Triangulo(int lado1, int lado2, int lado3) {
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;

}

Triangulo::~Triangulo() {

}

void Triangulo::mostrarTipo(){
    if(this->lado1 == this->lado2 && this->lado2 == this->lado3){

        cout << "El triangulo es equilatero" << endl;

    }else if(this->lado1 == this->lado2 || this->lado2 == this->lado3 || this->lado1 == this->lado3){

        cout << "El triangulo es isoceles" << endl;

    }
    else {

        cout << "El triangulo es escaleno" << endl;

    }

}