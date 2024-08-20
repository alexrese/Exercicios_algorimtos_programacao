#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int chico = 150;
    int ze = 110;
    int anos = 1;

    while(chico > ze){
        anos++;
        chico+=2;
        ze+=3;
    }
    cout<<"serao necessarios "<< anos << " anos";

    return 0;
}
