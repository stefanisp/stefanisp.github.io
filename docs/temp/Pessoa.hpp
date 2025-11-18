#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa{
    private:
        string nome;
        int idade;

    public:
        Pessoa (string n, int i);

        void setNome(string n);
        string getNome();
        void setIdade(int i);
        int getIdade();
        void apresentacao();

};

#endif 