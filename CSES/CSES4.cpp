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

    int n;
    cin >> n;
    long long int cont = 0;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(i != 0){
            if(nums[i] < nums[i-1]){
                cont += nums[i-1] - nums[i];
                nums[i] = nums[i-1];
            }

        }
        
    }

    cout << cont << "\n";

    return 0;
}