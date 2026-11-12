#include <bits/stdc++.h>
using namespace std;

#define DEBUG false
#define debugf if (DEBUG) printf
#define MAXN 200309
#define MAXM 900009
#define ALFA 256
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define REP(i,a,b) for(int i = a; i < b; i++)

typedef pair<int,int> ii;
typedef  long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ii> vii;

void solve(){

    int n;

    cin >> n;

    int tam = pow(2,n);

    vi dp(tam,0);

    dp[0] = 0;
    dp[1] = 1;

    bitset<16> bin(0);
    int k = 0, exp = 1;
    int pot;

    REP(i,0,pow(2,n)){

        pot = (int) pow(2,exp);

        if(i >= 2){
            dp[i] = pot + dp[pot - (1 + k)];
            k++;
        }
        
        if(k == pot){
            k = 0;
            exp++;
        }
        
        bin = dp[i];
        for(int j = n-1; j >= 0; j--){
            cout << bin[j];
        }
        cout << "\n";
    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}