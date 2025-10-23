#include <iostream>
using namespace std;

// Primeira função
void primeiraFuncao() {
    cout << "Mensagem da primeira função." << endl;
}

// Segunda função
void segundaFuncao() {
    cout << "Mensagem da segunda função." << endl;
}

int main() {
    cout << "Início do programa no main." << endl;

    primeiraFuncao(); // chama a primeira função

    cout << "De volta ao main, depois da primeira função." << endl;

    segundaFuncao(); // chama a segunda função

    cout << "Final do programa no main." << endl;

    return 0;
}