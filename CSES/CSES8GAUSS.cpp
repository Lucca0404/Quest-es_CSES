#include <bits/stdc++.h>
using namespace std;

#define DEBUG false
#define debugf if (DEBUG) printf
#define MAXN 200309
#define MAXM 900009
#define ALFA 256
#define MOD 1000000007
#define INF 0x3f3f3f3f

typedef pair<int,int> pii;
typedef long long int lli;
typedef unsigned long long int ulli;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ulli n;

    cin >> n;

    if(n*(n+1)/2 % 2 == 1){
        cout << "NO\n";
    }
    else{

        cout << "YES\n";

        if(n % 2 == 0){

            int num;

            cout << n/2 << endl;

            for(int i = 0; i < n/4; i++){
                num = i+1;
                cout << num << " ";
                num = n-i;
                cout << num << " ";
            }

            cout << endl;

            cout << n/2 << endl;

            for(int i = n/2; i < 3*n/4; i++){
                num = i+1;
                cout << num << " ";
                num = n-i;
                cout << num << " ";
            }

            cout << endl;

        }
        else{

            int num;

            int ult = 0;

            cout << n/2+1 << endl;

            for(int i = 0; i <= n/4; i++){

                if(i+1 + n/2+1 == n-i){
                    ult = n-i;
                    cout << i+1 << " " << n/2+1 << " ";
                    continue;
                }
                num = i+1;
                cout << num << " ";
                num = n-i;
                cout << num << " ";

            }

            cout << endl;

            cout << n/2 << endl;

            for(int i = n/2+1; i < 3*n/4; i++){

                num = i+1;
                cout << num << " ";
                num = n-i;
                cout << num << " ";

            }

            cout << ult;

            cout << endl;

        }
    }

    return 0;
}