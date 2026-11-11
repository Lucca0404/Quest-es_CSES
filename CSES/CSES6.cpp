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

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long int a,b;

    while(n > 0){
        n--;
        cin >> a >> b;

        int eixo;
        long long int maior;

        maior = max(a,b);

        long long int res;
        res = (maior-1) * maior + 1;

        if(maior % 2 == 0){
            res += a-b;
        }
        else{
            res += b-a;
        }
        cout << res << "\n";
    }

    

    return 0;
}