#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int TAM = 1000;
    char frase[TAM];

    cout << "Digite a frase: ";
    cin.getline(frase, TAM);

    char letras[TAM];
    int index = 0;

    for (int i = 0; i < strlen(frase); ++i) {
        if (frase[i] != ' ') {
            letras[index++] = frase[i];
        }
    }
    letras[index] = '\0'; // Adicionar o terminador nulo para formar a string

    cout << "Letras sem espacos: " << letras << endl;

    return 0;
}
