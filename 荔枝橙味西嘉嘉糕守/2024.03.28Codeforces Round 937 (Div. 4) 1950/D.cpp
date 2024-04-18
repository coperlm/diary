#include<bits\stdc++.h>
#define int long long

using namespace std;

int s[50] = {0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111};
int a[100100];

void init(){
    int len = 32;
    for(int i = 1;i <= len;i ++){
        for(int j = 1;j <= len;j ++){
            for(int k = 1;k <= len;k ++){
                for(int o = 1;o <= len;o ++){
                    for(int l = 1;l <= len;l ++){
                        int t = s[i]*s[j]*s[k]*s[o]*s[l];
                        if( t > 100000 or t < 0) continue;
                        a[t] = 1;
                    }
                }
            }
        }
    }
    return ;
}
int n;
void solve(){
    cin >> n;
    if( a[n] == 1 ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return ;
}

signed main(){
    init();/*
    for(int i = 1;i <= 100000;i ++)
    {
        cout << a[i] << ",";
    }*/
    int t = 1;cin >> t;
    while( t -- ){
        solve();
    }
    return 0;
}