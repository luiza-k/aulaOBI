#include <iostream>

using namespace std;

int main(void){
    int exp, res = 1, base;

    cout << "Qual o base da potência? ";
    cin >> base;

    cout << "Qual o expoente da potência? ";
    cin >> exp;

    for (int i = 0; i < exp; i++ ){
        res *= base;
    }

    cout << base << " elevado a " << exp << " é igual a " << res << "\n'";
    
    return 0;
}

