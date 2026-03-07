#include <iostream>

using namespace std;

int main(void){

    int E,S,L, dist;

    cin >> E >> L >> S;
    dist = abs(E-L)+abs(L-S)+abs(S-E);
    
    cout << dist;
   
    return 0;

}