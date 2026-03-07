#include <iostream>

using namespace std;

int main(void){

int A,B,C;
cout<<"Quais são as idades das irmãs?" "\n";
cin>> A >> B >> C;

if(A>=B && B>=C || A==B && B==C || C>=B && B>=A) {
    cout<<"A idade de Camila é "<<B<<"\n";
}
else if(B>=A && A>=C || A==B && B==C || C>=A && A>=B) {
    cout<<"A idade de Camila é "<<A<<"\n";

}
else if(B>>C && C>=A || A==B && B==C || A>=C && C>=B) {
    cout<<"A idade de Camila é "<<C<<"\n";

}
else if (A>B && B==C ||C>B && B==A ){ 
    cout<<"A idade de Camila é "<<B<<"\n";
}
else if(B>C && C==A){
    cout<<"A idade de Camila é "<<C<<"\n";
}
    return 0;
}



