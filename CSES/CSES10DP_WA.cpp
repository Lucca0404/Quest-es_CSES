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

    pair<int,int> dp[n+1];

    cout << "passou\n";

    dp[2] = {1,0};
    dp[5] = {0,1};
    for(ulli i = 1; i <= n; i++){
        if(i % 2 == 0){
            dp[i] = dp[i/2];
            dp[i].first++;
        }
        if(i % 5 == 0){
            dp[i] = dp[i/5];
            dp[i].second++;
        }
    }

    ulli cont2 = 0, cont5 = 0;

    for(ulli i = 0; i <= n; i++){
        cont2 += dp[i].first;
        cont5 += dp[i].second;
    }
    
    cout << min(cont2,cont5) << endl;

    return 0;
}