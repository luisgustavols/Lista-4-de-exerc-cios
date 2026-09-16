//Array dinâmico e média dos valores

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite a quantidade de elementos: ";
    cin >> n;

    double* valores = new double[n];
    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << (i + 1) << ": ";
        cin >> valores[i];
        soma += valores[i];
    }

    double media = soma / n;

    cout << "\nA media dos valores e: " << media << endl;

    delete[] valores;

    return 0;
}