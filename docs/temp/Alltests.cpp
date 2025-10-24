
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vetor de nomes (strings)
    vector<string> nomes = {"Ana", "João", "José", "Maria"};

    // Vetor de notas (números reais)
    vector<float> notas = {8.5, 7.2, 9.0, 7.8};

    // Exibindo os dois vetores juntos
    cout << "Lista de alunos e suas notas:" << endl;

    for (int i = 0; i < nomes.size(); i++) {
        cout << nomes[i] << " - " << notas[i] << endl;
    }

    return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> flores;
    vector<string> cores = {"branco", "amarelo", "azul"};

    for (string cor : cores){
        cout << cor << " - ";
    }

    return 0;
}
    */