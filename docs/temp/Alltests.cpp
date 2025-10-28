#include <iostream>
#include <vector>
using namespace std;

// ---------- Declaração dos vetores globais ----------
vector<string> nomes;
vector<float> notas;

// ---------- Funções ----------
void inserirAluno(string nome, float nota) {
    nomes.push_back(nome);
    notas.push_back(nota);
    cout << "Aluno " << nome << " inserido com sucesso!\n";
}

void listarAlunos() {
    if (nomes.empty()) {
        cout << "Nenhum aluno cadastrado.\n";
        return;
    }

    cout << "\n--- Lista de Alunos ---\n";
    for (int i = 0; i < nomes.size(); i++) {
        cout << i + 1 << ". " << nomes[i] << " - Nota: " << notas[i] << endl;
    }
}

void buscarAluno(string nomeBuscado) {
    bool encontrado = false;
    for (int i = 0; i < nomes.size(); i++) {
        if (nomes[i] == nomeBuscado) {
            cout << "Aluno encontrado: " << nomes[i] << " - Nota: " << notas[i] << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado)
        cout << "Aluno nao encontrado.\n";
}

void removerAluno(string nomeRemover) {
    bool removido = false;
    for (int i = 0; i < nomes.size(); i++) {
        if (nomes[i] == nomeRemover) {
            nomes.erase(nomes.begin() + i);
            notas.erase(notas.begin() + i);
            cout << "Aluno " << nomeRemover << " removido com sucesso!\n";
            removido = true;
            break;
        }
    }
    if (!removido)
        cout << "Aluno nao encontrado.\n";
}

void limparCadastro() {
    if (nomes.empty()) {
        cout << "O cadastro ja esta vazio.\n";
    } else {
        nomes.clear();
        notas.clear();
        cout << "Todos os cadastros foram apagados.\n";
    }
}

// ---------- Função principal ----------
int main() {
    string nome;
    float nota;

    int opcao = 1;

    cout << "=== Sistema simples de cadastro de alunos ===\n";

    while (opcao != 0) {
        cout << "\n===== MENU DE CADA1STRO =====\n";
        cout << "1. Inserir aluno\n";
        cout << "2. Listar alunos\n";
        cout << "3. Buscar aluno\n";
        cout << "4. Remover aluno\n";
        cout << "5. Limpar todos os cadastros\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1){
            cout << "Digite o nome do aluno: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Digite a nota: ";
            cin >> nota;
            inserirAluno(nome, nota);

        }else if (opcao == 2){
            listarAlunos();

        }else if (opcao == 3){
            cout << "Digite o nome do aluno que deseja buscar: ";
            cin.ignore();
            getline(cin, nome);
            buscarAluno(nome);

        }else if (opcao == 4){  
            cout << "Digite o nome do aluno que deseja remover: ";
            cin.ignore();
            getline(cin, nome);
            removerAluno(nome);
        
        }else if (opcao == 5){
            limparCadastro();
        
        }else if (opcao == 0){
            cout << "Encerrando o programa.\n";
            
        }else{
            cout << "Opcao invalida! Tente novamente.\n";
        
        }
        
    } 

    return 0;
}
