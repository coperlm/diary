#include<iostream>
#include<cmath>
#define int long long 

using namespace std;

int ggcd( int a , int b ){
    if( a % b == 0 ){
        return b;
    }
    return ggcd( b , a % b );
}

const int N = 1e7;
int a[N+10];

void outppt( int n ){
    for(int i = 1;i <= n;i ++){
        cout << a[i] << " ";
    }cout << endl;
}

void solve( int n ){
    for(int i = 1;i <= n;i ++){
        a[i] = i;
    }
    for(int i = 2;i <= n;i ++){
        for(int j = i-1;j >= 1;j --){
            if( i % j == 0 ){
                swap( a[i] , a[j] );
                break;
            }
        }
    }
    // outppt( n );
    for(int i = 1;i <= n;i ++){
        if( a[i] == 1 )
        {
            cout << n << " | " << i << endl;
            break;
        }
    }
    return ;
}

void ans( int n ){
    int t = 0;
    while( n>>1 ){
        n = n>>1;
        t ++;
    }
    while( t -- ){
        n = n<<1;
    }
    cout << n << endl;
    return ;
}

signed main(){
    int t , n ;cin >> t;
    while( t -- ){
        cin >> n;
        ans( n );
    }
    return 0;
}