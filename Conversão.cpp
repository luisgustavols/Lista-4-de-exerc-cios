//Conversão de dólares para reais com função inline

#include <iostream>

using namespace std;

inline float converterParaReais(float dolares, float cotacao) {
    return dolares * cotacao;
}

int main() {
    float dolares, cotacao;

    cout << "Digite a quantia em dolares: ";
    cin >> dolares;

    cout << "Digite a cotacao do dolar: ";
    cin >> cotacao;

    float reais = converterParaReais(dolares, cotacao);

    cout << "O valor em reais e: R$ " << reais << endl;

    return 0;
}