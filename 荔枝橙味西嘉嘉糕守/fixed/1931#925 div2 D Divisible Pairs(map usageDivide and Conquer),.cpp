#include<iostream>
#include<algorithm>
#include<map>
#define int long long

using namespace std;

const int N = 2e5;
int a[N+100];
map < pair< int , int > , int > mp;

void solve(){
    mp.clear();
    int n , x , y , ans = 0;
    cin >> n >> x >> y;
    for(int i = 1;i <= n;i ++){
        cin >> a[i];
    }
    for(int i = 1;i <= n;i ++){
        int s1 = (x-a[i]%x) % x , s2 = a[i] % y ;//in need
        ans += mp[{s1,s2}];
        mp[{ a[i] % x , a[i] % y }] ++;//in satisfied
    }
    cout << ans << endl;
}

signed main(){
    int t;cin >>t;
    while( t -- ){
        solve();
    }
    return 0;
}