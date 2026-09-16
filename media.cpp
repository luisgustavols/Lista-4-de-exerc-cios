// Estrutura de aluno e cálculo de média


#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};

float calcularMedia(Aluno a) {
    return (a.nota1 + a.nota2 + a.nota3) / 3.0;
}

int main() {
    Aluno meuAluno;

    cout << "Digite o nome do aluno: ";
    getline(cin, meuAluno.nome);

    cout << "Digite a matricula: ";
    cin >> meuAluno.matricula;

    cout << "Digite a primeira nota: ";
    cin >> meuAluno.nota1;

    cout << "Digite a segunda nota: ";
    cin >> meuAluno.nota2;

    cout << "Digite a terceira nota: ";
    cin >> meuAluno.nota3;

    float media = calcularMedia(meuAluno);

    cout << "\n--- Dados do Aluno ---" << endl;
    cout << "Nome: " << meuAluno.nome << endl;
    cout << "Matricula: " << meuAluno.matricula << endl;
    cout << "Nota 1: " << meuAluno.nota1 << endl;
    cout << "Nota 2: " << meuAluno.nota2 << endl;
    cout << "Nota 3: " << meuAluno.nota3 << endl;
    cout << "Media: " << media << endl;

    return 0;
}