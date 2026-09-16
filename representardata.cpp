// Estrutura para representar uma data

#include <iostream>

using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data minhaData;

    cout << "Digite o dia: ";
    cin >> minhaData.dia;

    cout << "Digite o mes: ";
    cin >> minhaData.mes;

    cout << "Digite o ano: ";
    cin >> minhaData.ano;

    cout << "\nData informada: ";
    cout << minhaData.dia << "/" << minhaData.mes << "/" << minhaData.ano << endl;

    return 0;
}