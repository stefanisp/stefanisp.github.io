#include <iostream>
#include <string>
#include <algorithm> // std::transform
#include <cctype>    // std::tolower

using namespace std;
int main() { 
     int a = 10, b = 3, c = 5;

    // Operadores aritméticos
    cout << "Soma: " << a + b << endl;
    cout << "Subtração: " << a - b << endl;
    cout << "Multiplicação: " << a * b << endl;
    cout << "Divisão: " << a / b << endl;
    cout << "Resto: " << a % b << endl;

    // Operadores relacionais
    cout << "a é igual a b? " << (a == b) << endl;
    cout << "a é maior que b? " << (a > b) << endl;

    // Operadores lógicos
    cout << "a > 5 e b < 5? " << (a > 5 && b < 5) << endl;
    cout << "a > 5 ou b > 5? " << (a > 5 || b > 5) << endl;
    cout << "a não é menor que b? " << !(a < b) << endl;

    //Operadores unários de incremento e decremento
    cout << "Incremento pré-fixado: " << ++c << endl; // imprime 6
    c = 5;
    cout << "Incremento pós-fixado: " << c++ << endl;
    

     return 0;
}