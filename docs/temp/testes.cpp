#include "Pessoa.hpp"
#include <iostream>
using namespace std;

int main() {

    Pessoa p1("Ana", 21);
    Pessoa p2 ("Maria", 22), p3("João", 23);
    
    p1.apresentacao();
    p2.apresentacao();
    p3.apresentacao();

    return 0;
}
