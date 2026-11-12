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

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;

    cin >> n;

    if(n*(n+1)/2 % 2 == 1){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        vi pri;
        vi sec;

        ll num = n*(n+1)/4;

        for(int i = n; i > 0; i--){
            if(num - i >= 0){
                pri.push_back(i);
                num -= i;
            }
            else{
                sec.push_back(i);
            }
        }

        cout << pri.size() << "\n";
        REP(i,0,pri.size()){
            cout << pri.at(i) << " ";
        }
        cout << "\n";

        cout << sec.size() << "\n";
        REP(i,0,sec.size()){
            cout << sec.at(i) << " ";
        }
        cout << "\n";
    }

    return 0;
}