#include <iostream>
using namespace std;

struct Gladiador {
    char nome[100];
    int forca;
    int habilidade;
    int idade;
};

// Função para cadastrar os gladiadores
void cadastrarGladiadores(Gladiador gladiadores[], int quantidade) {
    for(int i = 0; i < quantidade; i++) {
        cout << "Cadastro do Gladiador " << i + 1 << endl;
        cout << "Nome do Gladiador: ";
        cin >> gladiadores[i].nome;
        cout << "Forca do Gladiador: ";
        cin >> gladiadores[i].forca;
        cout << "Habilidade do Gladiador: ";
        cin >> gladiadores[i].habilidade;
        cout << "Idade do Gladiador: ";
        cin >> gladiadores[i].idade;
    }
}

//Função para mostrar os nomes dos gladiadores
void nomesGladiadores(const Gladiador gladiadores[], int quantidade) {
    cout << "Lista de Gladiadores: " << endl;
    for(int i = 0; i < quantidade; i++) {
        cout << i << ": " << gladiadores[i].nome << endl;
    }
}

// Função para escolher as batalhas
void escolherBatalhas(Gladiador gladiadores[], int quantidade) {

    int escolha_1, escolha_2, escolha_3, escolha_4;

    cout << "Escolha dois Gladiadores para a batalha 1";
    cin >> escolha_1 >> escolha_2;

    cout << "Escolha dois Gladiadores para a batalha 2:";
    cin >> escolha_3 >> escolha_4;
    

    if (escolha_1 < 0 || escolha_1 >= quantidade ||
        escolha_2 < 0 || escolha_2 >= quantidade ||
        escolha_3 < 0 || escolha_3 >= quantidade ||
        escolha_4 < 0 || escolha_4 >= quantidade) {
            cout << "Escolha invalida" << endl;
            return;
        }

    cout << "Batalha 1: " << gladiadores[escolha_1].nome << " X " << gladiadores[escolha_2].nome << endl;
    cout << "Batalha 2: " << gladiadores[escolha_3].nome << " X " << gladiadores[escolha_4].nome << endl;
    
}

int main() {

    const int quantidade = 5;
    Gladiador gladiadores[quantidade];

    // Cadastrar 5 gladiadores
    cadastrarGladiadores(gladiadores, quantidade);

    // Mostrar nome dos Gladiadores
    nomesGladiadores(gladiadores, quantidade);

    // Escolher batalhas
    escolherBatalhas(gladiadores, quantidade);

    return 0;
}