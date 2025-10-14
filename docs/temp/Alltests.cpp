#include <iostream>
using namespace std;

int main() {
    float nota, soma = 0;
    int quantidade = 5;

    for (int i = 1; i <= quantidade; i++) {
        cout << "Digite a nota " << i << ": ";
        cin >> nota;
        soma += nota; // soma = soma + nota
    }

    float media = soma / quantidade;
    cout << "A média das notas é: " << media << endl;

    return 0;
}
