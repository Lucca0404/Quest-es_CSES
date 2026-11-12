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
typedef unsigned long long int ulli;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    int r = 1;

    for(int i = 1; i <= n; i++){
        r *= 2;
        r %= MOD;
    }

    cout << r;

    return 0;
}