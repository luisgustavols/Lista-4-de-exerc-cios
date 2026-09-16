// Estrutura e função para soma

#include <iostream>

using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int valor1, valor2;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    int resultado = soma(valor1, valor2);

    cout << "A soma e: " << resultado << endl;

    return 0;
}