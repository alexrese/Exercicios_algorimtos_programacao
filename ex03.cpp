#include <iostream>
#include <ctime>  

using namespace std;

int main() {
    int vetor[100];

    srand(time(0));

    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = rand() % 100; 
    }

    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = 0; j < tamanho - i - 1; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    cout << "Vetor ordenado: \n";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    return 0;
}
