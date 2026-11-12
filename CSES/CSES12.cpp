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
    cin.tie(0);

    string s;

    cin >> s;

    vector<int> letras(26,0);

    for(int i = 0; i < s.size(); i++){
        letras[((int) s[i]) - 65]++;
    }

    int contImpar = 0;
    int letraImpar = -1;

    for(int i = 0; i < 26; i++){
        if(letras[i] % 2 == 1){
            contImpar++;
            if(contImpar > 1){
                break;
            }
        }
    }

    if(contImpar > 1){
        cout << "NO SOLUTION\n";
    }
    else{
        vector<char> pal(s.size(),'A');

        int atual = 0;
        int index = 0;

        while(atual != 26){
            if(letras[atual] == 0){
                atual++;
            }
            else{
                if(letras[atual] == 1){
                    letraImpar = atual;
                    atual++;
                    continue;
                }
                letras[atual]-=2;
                pal[index] = (char) atual+65;
                pal[s.size()-(index+1)] = (char) atual+65;
                index++;
            }
        }
        if(s.size() % 2 == 1){
            pal[s.size()/2] = letraImpar + 65;
        }

        for(int i = 0; i < s.size(); i++){
            cout << pal[i];
        }
        cout << "\n";
    }

    return 0;
}