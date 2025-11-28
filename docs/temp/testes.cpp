#include <string>
#include <iostream>

class Endereco {
private:
    std::string rua;
    int numero;

public:
    Endereco(std::string r, int n) : rua(r), numero(n) {}
    
    std::string getEnderecoCompleto(){
        return rua + ", " + std::to_string(numero);
    }

};

class Pessoa {
private:
    std::string nome;
    int idade;
    Endereco endereco;   // Composição: uma Pessoa possui um Endereco

public:
    Pessoa(std::string n, int i, Endereco e)
        : nome(n), idade(i), endereco(e) {}
    
    void apresentacao(){
        std::cout << "Olá, meu nome é " << nome << ". Tenho " << idade <<
        " anos. \n Moro no endereço: " << endereco.getEnderecoCompleto() << std::endl;
}
};


int main() {
    Endereco end("Rua das Flores", 123);
    Pessoa pessoa("Maria", 20, end);

    pessoa.apresentacao();

    return 0;
}
