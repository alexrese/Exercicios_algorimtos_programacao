#include <iostream>
using namespace std;

int main()
{
    int anterior = 0, atual = 1, proximo, n = 0;
    cout<<"Informe o valor de entrada para calcular os N primeiros termos de fibonacci: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        if(i <= 1){
            proximo = i;
        }else{
            proximo = atual+anterior;
            anterior = atual;
            atual = proximo;
        }
        cout<<" " << proximo;
    }
    return 0;
}
