#include <iostream>
using namespace std;

int main() {
    float nota, soma = 0;
    int quantidade = 5;
    int i = 0; 

    while (i <= quantidade) {
        cout << "Digite a nota " << i << ": ";
        cin >> nota;
        soma += nota; // soma = soma + nota
        i++;
    }

    float media = soma / quantidade;
    cout << "A média das notas é: " << media << endl;

    return 0;
}