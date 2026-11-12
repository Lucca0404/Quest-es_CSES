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
typedef  long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<pii> vii;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ulli n;

    cin >> n;

    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            n = 3*n + 1;
        }
    }

    cout << n;
    cout << endl;

    return 0;
}