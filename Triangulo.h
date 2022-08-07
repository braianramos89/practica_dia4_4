
#ifndef TEMPLATECPP_TRIANGULO_H
#define TEMPLATECPP_TRIANGULO_H



using namespace std;

class Triangulo {

private:
    int lado1, lado2, lado3;

public:
    Triangulo(int lado1, int lado2, int lado3);
    ~Triangulo();
    void mostrarTipo();
};

#endif //TEMPLATECPP_TRIANGULO_H
