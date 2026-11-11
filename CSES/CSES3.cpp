#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    char ult = s[0];
    int cont = 1;
    int maximo = 1;

    for(int i = 1; i < s.size(); i++){
        if(s[i] != ult){
            ult = s[i];
            cont = 1;
        }
        else{
            cont++;
        }
        if(cont > maximo){
            maximo = cont;
        }
    }

    cout << maximo << "\n";
    

    return 0;
}