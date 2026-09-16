//Função sobrecarregada para cálculo do quadrado

#include <iostream>

using namespace std;

int calculaQuadrado(int x) {
    return x * x;
}

double calculaQuadrado(double x) {
    return x * x;
}

int main() {
    int numeroInt;
    double numeroDouble;

    cout << "Digite um numero inteiro: ";
    cin >> numeroInt;

    cout << "Digite um numero decimal: ";
    cin >> numeroDouble;

    cout << "O quadrado do numero inteiro e: " << calculaQuadrado(numeroInt) << endl;
    cout << "O quadrado do numero decimal e: " << calculaQuadrado(numeroDouble) << endl;

    return 0;
}