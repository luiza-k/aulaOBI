#include <iostream>

using namespace std;

int main(void){

   int  a, b,res;
    cout << " Quais os números que você quer multiplicar? ";
    cin >> a >> b ;

   
    res =  a % b ;

    cout << "o resto da divisão dos numeros intregues é: "<< res << "/n";


    return 0;

}