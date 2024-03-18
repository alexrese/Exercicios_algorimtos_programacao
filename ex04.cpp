#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Insira o tamanho das matrizes quadradas: ";
    cin >> n;

    int mat1[n][n];
    int mat2[n][n];
    int resultado[n][n];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            mat1[i][j] = rand()%10+1;
            mat2[i][j] = rand()%10+1;
            resultado[i][j] = 0;
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Matriz Resultado:" << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
