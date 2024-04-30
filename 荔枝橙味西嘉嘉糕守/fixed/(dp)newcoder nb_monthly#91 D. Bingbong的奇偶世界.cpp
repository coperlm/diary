#include<iostream>
#include<cmath>
#define int long long
#define LL long long

using namespace std;

const int mod = 1e9+7;

int a[12];

signed main(){
    int n;
    int ans = 0 , cnt = 0;
    cin >> n;getchar();
    
    for(int i = 1;i <= n;i ++){
        int id = getchar()-'0';
        a[id] ++;
        if( id == 0 ){
            //cnt表示不合法序列，需要偶数（包括0）将其转化为合法序列
            //+1表示这个数字单独成数，占一种可能性
            ans = ans + cnt + 1;
            cnt *= 2;
        }
        else if( id % 2 ){
            cnt = cnt * 2 + 1;
        }
        else{
            ans = ans + cnt + 1;
            cnt = cnt * 2 + 1;
        }
        ans %= mod , cnt %= mod;
    }
    cout << ans << endl;
    return 0;
}