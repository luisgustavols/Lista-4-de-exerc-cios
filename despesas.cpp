//Matriz de despesas

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int ANO = 2;
    const int TRIMESTRE = 4;
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    for (int i = 0; i < ANO; i++) {
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "Digite a despesa do Ano " << (i + 1) << ", Trimestre " << (j + 1) << ": ";
            cin >> despesas[i][j];
            totalGeral += despesas[i][j];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\n--- Tabela de Despesas ---" << endl;
    cout << "Ano\tT1\tT2\tT3\tT4" << endl;
    
    for (int i = 0; i < ANO; i++) {
        cout << (i + 1) << "\t";
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << despesas[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nTotal geral das despesas: R$ " << totalGeral << endl;

    return 0;
}