#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //Definindo valores padrao para a Matriz
    int m_prof[TAM][TAM] = {0};

    //Exibicao da Matriz
    for(int lin = 0; lin < TAM; lin++){
        for(int col = 0; col < TAM; col++){
            cout<<m_prof[lin][col]<<" ";
        }
        cout<<endl;
    }
    // Preenchimento da Matriz
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            m_prof[i][j]=rand()%50+1;
        }
    }
    cout<<endl;
    //Exibicao da Matriz
    for(int lin = 0; lin < TAM; lin++){
        for(int col = 0; col < TAM; col++){
            cout<<m_prof[lin][col]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
    //Diagonal principal
    for(int lin = 0; lin < TAM; lin++){
        for(int col = 0; col < TAM; col++){
            if(col==lin){
                cout<<m_prof[lin][col]<<"\t";
            }
        }
    }

     cout<<endl;
     cout<<endl;
    //Diagonal secundaria
    for(int lin = 0; lin < TAM; lin++){
        for(int col = 0; col < TAM; col++){
            if((col+lin)==TAM-1){
                cout<<m_prof[lin][col]<<"\t";
            }
        }
    }

    return 0;
}
