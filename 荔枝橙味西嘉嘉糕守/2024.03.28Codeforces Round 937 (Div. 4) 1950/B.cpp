#include<bits\stdc++.h>

using namespace std;

const int N = 20;
int n , a[N*2+10];

void solve(){
    cin >> n;
    for(int i = 1;i <= n*2;i ++)
    {
        for(int j = 1;j <= 2*n;j ++)
        {
            int ii = (i-1)/2 , jj = (j-1)/2;
            if( ( ii + jj ) % 2 ) 
                cout << ".";
            else{
                cout << "#";
            }
        }cout << endl;
    }
    return ;
}

signed main(){
    int t = 1;cin >> t;
    while( t -- ){
        solve();
    }
    return 0;
}