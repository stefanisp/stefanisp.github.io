#include <iostream>
#include <cmath>     // Biblioteca matemática
using namespace std;

int main() {
    double numero = 9.0;
    double base = 2.0;
    double expoente = 3.0;
    double angulo = 0.785398; // Aproximadamente 45 graus em radianos

    // Aplicando várias funções matemáticas e armazenando os resultados
    double raiz = sqrt(numero);               // Raiz quadrada
    double potencia = pow(base, expoente);    // Potência base^expoente
    double absoluto = abs(-15.7);             // Valor absoluto
    double arredondado = round(4.67);         // Arredondamento
    double teto = ceil(4.2);                  // Arredonda para cima
    double piso = floor(4.8);                 // Arredonda para baixo

    // Exibindo os resultados
    cout << "Raiz quadrada de " << numero << ": " << raiz << endl;
    cout << base << " elevado a " << expoente << ": " << potencia << endl;
    cout << "Valor absoluto de -15.7: " << absoluto << endl;
    cout << "Arredondamento de 4.67: " << arredondado << endl;
    cout << "Teto de 4.2: " << teto << endl;
    cout << "Piso de 4.8: " << piso << endl;

    return 0;
}
