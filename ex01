#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int a15 = 0, a16_30 = 0, a31_45 = 0, a46_60 = 0, a61 = 0;
    int idade = 0;
    srand (time(NULL));
    for(int i = 0; i < 15; i++){
        idade = rand()%100+1;
        if(idade <= 15){
            a15++;
        }else{
            if(idade <= 30){
                 a16_30++;
            }else{
                if(idade <= 45){
                    a31_45++;
                }else{
                    if(idade <=60){
                        a46_60++;
                    }else{
                        a61++;
                    }
                }
            }
        }
    }
    cout << "menor 15: " << a15 << endl;
    cout << "16 - 30: " << a16_30 << endl;
    cout << "31 - 45: " << a31_45 << endl;
    cout << "46 - 60: " << a46_60 << endl;
    cout << "maior 60: " << a61 << endl;

    cout << "na primeira: " << ((a15*100)/15) << "% na ultima: " << ((a61*100)/15) << "%" <<  endl;
    return 0;
}
