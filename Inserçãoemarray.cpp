//Inserção em array dinâmico

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite a quantidade inicial de elementos: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int novoValor;
    cout << "Digite um novo valor para inserir ao final: ";
    cin >> novoValor;

    int* arrMaior = new int[n + 1];
    for (int i = 0; i < n; i++) {
        arrMaior[i] = arr[i];
    }
    arrMaior[n] = novoValor;

    delete[] arr;
    arr = arrMaior;
    n++;

    cout << "\nArray apos a insercao: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int valorRemover;
    cout << "\nDigite um valor para remover do array: ";
    cin >> valorRemover;

    int indiceRemover = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == valorRemover) {
            indiceRemover = i;
            break;
        }
    }

    if (indiceRemover != -1) {
        int* arrMenor = new int[n - 1];
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (i == indiceRemover) {
                continue;
            }
            arrMenor[j] = arr[i];
            j++;
        }

        delete[] arr;
        arr = arrMenor;
        n--;

        cout << "\nArray final apos a remocao: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Elemento nao encontrado no array." << endl;
    }

    delete[] arr;

    return 0;
}