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

    ulli cont2 = 0, cont5 = 0;

    for(ulli i = 2; i <= n; i*=2){
        cont2 += n / i;
    }
    for(ulli i = 5; i <= n; i*=5){
        cont5 += n / i;
    }

    cout << min(cont2,cont5) << endl;

    return 0;
}