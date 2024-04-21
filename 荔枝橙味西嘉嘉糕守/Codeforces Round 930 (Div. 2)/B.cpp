#include<iostream>
#include<cmath>
#define int long long 

using namespace std;

const int N = 2e5;
int a[N+10][2];
int okstr[N+10];

void solve(){
    int n;cin >> n;
    string s;
    cin >> s;
    for(int i = 0;i < n;i ++){
        a[i][0] = s[i] - '0';
    }
    cin >> s;
    for(int i = 1;i <= n;i ++){
        a[i][1] = s[i-1] - '0';
    }
    cout << a[0][0];
    okstr[0] = a[0][0];
    int point = 0;
    for(int i = 1;i < n;i ++){
        if( ! point ){
            if( a[i][0] and !a[i][1] ){
                point = 1;
                cout << a[i][1];
                okstr[i] = a[i][1];
            }
            else{
                cout << a[i][0];
                okstr[i] = a[i][0];
            }
        }
        else{
            cout << a[i][1];
            okstr[i] = a[i][1];
        }
    }cout << a[n][1] << endl;okstr[n] = a[n][1];
    /*
    int ans = 1;
    for(int i = 1;i < n;i ++){
        if( a[i][0] == a[i][1] ){
            ans ++;
        }
        else{
            if( a[i][0] and ! a[i][1] ){
                break;
            }
            else{
                continue;
            }
        }
    }
    cout << ans << endl;*/
    int okstr_ahead , okstr_tail;
    for(int i = 0;i < n;i ++){
        if( a[i][0] == okstr[i] ) okstr_ahead = i;
        else break;
    }
    for(int i = n;i > 0;i --){
        if( a[i][1] == okstr[i] ) okstr_tail = i;
        else break;
    }
    // cout << okstr_ahead << " | " <<  okstr_tail << endl;
    cout << okstr_ahead + (n-okstr_tail) - n + 2 << endl;
    /*
    int same_weight = 0;
    string min_string = "";
    for(int i = 1;i < n;i ++){
        if( a[i][1] == a[i+1][0] ){
            same_weight ++;
        }
    }*/
    return ;
}

signed main(){
    int t;cin >> t;
    while( t -- ){
        solve();
    }
    return 0;
}