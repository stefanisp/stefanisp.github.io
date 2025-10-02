#include <iostream>

using namespace std;
int main() { 
    
    // Declaração das variáveis sem valores iniciais
    string nome;
    int idade;
    float notaMedia;
    char turma;
    bool aprovado;

    // Solicitando os dados ao usuário
    cout << "Digite o nome do estudante: ";
    cin >> nome;  
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Digite a nota média: ";
    cin >> notaMedia;
    cout << "Digite a turma (uma letra): ";
    cin >> turma;
    cout << "O estudante foi aprovado? (1 = sim, 0 = não): ";
    cin >> aprovado;

    // Exibindo os dados coletados
    cout << "Dados do estudante: " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nota Média: " << notaMedia << endl;
    cout << "Turma: " << turma << endl;
    cout << "Aprovado? " << aprovado << endl;
    
     return 0;
}