#include<bits\stdc++.h>

using namespace std;

int a[10];

void solve(){
    a[1] = getchar()-'0' , a[2] = getchar()-'0' , getchar();
    a[3] = getchar()-'0' , a[4] = getchar()-'0' , getchar();
    int b = a[1]*10+a[2] , c = a[3]*10+a[4];
    if( b == 0 )
    {
        cout << "12" << ":";
        if( c < 10 ) cout << "0";
        cout << c << " AM" << endl;
    }
    else if( b > 12 ){
        if( b-12 < 10 ) cout << "0";
        cout << b-12 << ":";
        if( c < 10 ) cout << "0";
        cout << c << " PM" << endl;
    }
    else{
        if( b < 10 ) cout << "0";
        cout << b << ":" ;
        if( c < 10 ) cout << "0";
        cout << c << (b==12?" PM":" AM") << endl;
    }
    return ;
}

signed main(){
    int t = 1;cin >> t;getchar();
    while( t -- ){
        solve();
    }
    return 0;
}