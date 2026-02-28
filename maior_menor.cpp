#include <iostream>

using namespace std;

int main(void){
int a,b;

cout << "me diga dois números: ";
cin >> a >> b;
if (a>b) {

cout << a<<" maior que "<<b<<"/n";
}
else if (a==b){
    cout <<a<< " é igual a " <<b<< "/n";
}
else if  (a<b) {
    cout <<a<< "  é menor que  " <<b<< "/n";}

return 0;
}

