#include<bits\stdc++.h>

using namespace std;


void solve(){
    int a , b , c;
    cin >> a >> b >> c;
    if( a < b and b < c ) cout << "STAIR" << endl;
    else if( a < b and b > c ) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
    return ;
}

signed main(){
    int t = 1;cin >> t;
    while( t -- ){
        solve();
    }
    return 0;
}