#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    bool a;
    cout << "5 + 6 * 4: " << 5 + 6 * 4 << endl;
    cout << "5 + 6 - 3: " << 5 + 6 - 3 << endl;
    cout << "12.0 / 6.0 * 4: " << 12.0 / 6.0 * 4 << endl;
    cout << "8 + 3 * 5: " << 8 + 3 * 5 << endl;
    cout << "4 % (5 - 3): " << 4 % (5 - 3) <<  endl;
    cout << "12 %  5 / 3: " << 12 %  5 / 3 << endl;
    cout << "2 + (5* (3 + 2)): " << 2 + (5* (3 + 2)) << endl;
    cout << "4 + ((10 / 2) * 4): " << endl;
    cout << "12 % 7: " << 12 % 7 << endl;
    cout << "125 / 3 % 7 + 3 * 5 - 4: " << 125 / 3 % 7 + 3 * 5 - 4 << endl;
    cout << "9 + 9 * 2 - 14 % 5: " << 9 + 9 * 2 - 14 % 5 << endl;
    cout << "67 % 5 * 2 / 4: " << 67 % 5 * 2 / 4 << endl;
    cout << "10 % 13 + 5 * 3: " << 10 % 13 + 5 * 3 << endl;
    cout << "25 / 2 % 3 * 2  + 49: " << 25 / 2 % 3 * 2  + 49 << endl;
    cout << "66 / 3 + 16 - 2: " << 66 / 3 + 16 - 2 << endl;
    cout << "28 % 3: " << 28 % 3 << endl;
    cout << "28 / 3: " << 28 / 3 << endl;
    cout << "(3 * (5 + 6)): " << (3 * (5 + 6)) << endl;
    cout << "4 % (5 - 3): " << 4 % (5 - 3) << endl;
    cout << "3 * (1 + 2): " << 3 * (1 + 2) << endl;
    cout << "5.0 / 2.0 * 4: " << 5.0 / 2.0 * 4 << endl;
    cout << "3 * (10 / 2): " << 3 * (10 / 2) << endl;
    a = (4 * 6 == 3 * 8);
    cout << "4 * 6 == 3 * 8: " << a << endl;
    a = 5 + 2 > 7;
    cout << "5 + 2 > 7: " << a << endl;
    a = 9 * 3 != 3;
    cout << "9 * 3 != 3: " << a << endl;
    a = 3 * 3 != 9;
    cout << "3 * 3 != 9: " << a << endl;
    a = 5 == 4 + 2;
    cout << "5 == 4 + 2: " << a << endl;
    a = 23 / 4 * 4 + 6 % 5 <= 9 + 4.0/2.0;
    cout << "23 / 4 * 4 + 6 % 5 <= 9 + 4.0/2.0: " << a << endl;
    a = 25 / 2 % 3 * 2 + 49 <= 40;
    cout << "25 / 2 % 3 * 2 + 49 <= 40: " << a << endl;
    a = 10 % 5 != 40 / 8;
    cout << "10 % 5 != 40 / 8: " << a << endl;
    a = 127 % 40 >= 5;
    cout << "127 % 40 >= 5: " << a << endl;
    a = 1 || 0 && 0;
    cout << "falso ou verdadeiro e não verdadeiro: " << a << endl;
    a = 0 && 1 || 0;
    cout << "falso e verdadeiro ou falso: " << a << endl;
    a = 0 && 1 || 1;
    cout << "falso e verdadeiro ou verdadeiro: " << a << endl;

    return 0;
}
