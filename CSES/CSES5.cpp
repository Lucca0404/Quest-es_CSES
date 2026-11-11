#include <bits/stdc++.h>
using namespace std;

#define DEBUG false
#define debugf if (DEBUG) printf
#define MAXN 200309
#define MAXM 900009
#define ALFA 256
#define MOD 1000000007
#define INF 0x3f3f3f3f

int main(){

    int n;
    
    cin >> n;

    if(n == 1){
        cout << "1" << "\n";
    }
    else if(n <= 3){
        cout << "NO SOLUTION\n";
    }
    else{
        int a = n-1, b = n;
        while(a > 0){
            cout << a << " ";
            a -= 2;
        }
        while(b > 0){
            if(b-2 > 0){
                cout << b << " ";       
            }
            else{
                cout << b;   
            }
            
            b -= 2;
        }
        cout << "\n";
    }

    return 0;
}