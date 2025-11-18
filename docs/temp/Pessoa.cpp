#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(string n, int i): nome(n), idade(i){}

void Pessoa::setNome(string n){
    nome = n;
}
string Pessoa::getNome(){
    return nome;
}
void Pessoa::setIdade(int i){
    idade = i;
}
int Pessoa::getIdade(){
    return idade;
}
void Pessoa::apresentacao(){
    cout << "Olá, meu nome é " << nome << ". Tenho " << idade <<" anos." << endl;
}
