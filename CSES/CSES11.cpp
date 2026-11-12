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

    int t;

    cin >> t;

    while(t > 0){
        t--;

        ulli a, b;

        cin >> a >> b;

        if((a + b) % 3 == 0 && (max(a,b) <= min(a,b)*2)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    

    return 0;
}