#include <iostream>
#define int long long

using namespace std;

const int N = 4e5+10;
int a[N] , ans[N];

void solve(){
    int n;cin >> n;
    getchar();
    ans[0] = 0;
    for(int i = 1;i <= n;i ++){
        a[i] = getchar() - '0';
        ans[i] = ans[i-1] + a[i];
    }getchar();
    for(int i = n;i >= 1;i --){
        ans[i-1] += ans[i] / 10;
        ans[i] = ans[i] % 10;
    }
    int i = 0;
    while( ans[i] == 0 ){
        i ++;
    }
    for(;i <= n;i ++){
        cout << ans[i];
    }cout << "\n";
    return ;
}

signed main(){
    int t;cin >> t;
    while( t -- ){
        solve();
    }
}