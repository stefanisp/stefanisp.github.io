#include <iostream>
#include <string>
#include <algorithm> // std::transform
#include <cctype>    // std::tolower

using namespace std;
int main() { 
    string texto = "TARDE";

    transform(texto.begin(), texto.end(), texto.begin(), [](unsigned char c){ return tolower(c); });

    cout << texto; // saída: tarde
    

     return 0;
}