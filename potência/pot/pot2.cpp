#include <iostream>

using namespace std;

int main(void){
     long long res= 1;
    char letra;
    
do{  //o dowhile testa uma vez obrigatoriamente antes de perguntar a condição
        cout << "res = " << res << "\n";
        cin >> letra;
       
        res*=2;
        }while(letra== 'y'|| letra == 'y');
      

        return 0;
    }
