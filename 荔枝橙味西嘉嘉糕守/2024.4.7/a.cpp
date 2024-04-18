#include<bits\stdc++.h>

using namespace std;


void solve(){
    int sum = 0 , num[10];
    for(int i = 1;i <= 6;i ++){
        cin >> num[i];
        sum += num[i];
    }
    if( num[1] * 1.0 < sum * 1.0 / 30 ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return ;
}

signed main(){
    int t = 1;
    while( t -- ){
        solve();
    }
    return 0;
}