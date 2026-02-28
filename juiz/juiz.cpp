#include <iostream>

using namespace std;

int main(void){ 
    int nota, idade;
    
    cout << "Qual a sua idade? \n ";
    cin >> idade;

    cout << "Qual a nota da sua prova? \n ";
    cin >> nota;

    if (!(idade<=18)) {
        cout<<"Você é da modadlidade programação sênior!\n";
    

        return 0;}
    if (nota > 100|| nota< 0 || idade <=0) {
        cout << "A nota ou a idade está em formato inválido \n";
        return 0;
    }
    if (idade <=18 && nota>=80) {
        cout << "Você ganhou uma medalha na OBI \n";
        return 0;

    }
    if (idade <=18 && nota<=80) {
        cout << "não\n";
        return 0;
    }
        
    return 0;

}
