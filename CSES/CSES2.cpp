#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> vet(n);
    vector<int> achou(n);

    for(int i = 0; i < n-1; i++){
        cin >> vet[i];
        achou[vet[i]-1] = 1;
    }

    int t;

    for(int i = 0; i < n; i++){
        if(achou[i] == 0){
            t = i+1;
        }
    }

    cout << t << "\n";

    return 0;
}