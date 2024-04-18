#include <iostream>  
#include <vector>  
#include <unordered_map>  
  
using namespace std;  
  
void solve() {  
    int n, x, y;  
    cin >> n >> x >> y;  
    vector<int> a(n);  
    for (int i = 0; i < n; ++i) {  
        cin >> a[i];  
    }  
      
    unordered_map<pair<int, int>, int> cnt;  
    int ans = 0;  
    for (int e : a) {  
        int xx = e % x;  
        int yy = e % y;  
        // 假设这里是要找到(x - xx) % x 和 yy 对应的cnt值，并将其加到ans上  
        ans += cnt[{((x - xx) % x, yy}];  
        // 更新(xx, yy)在cnt中的计数  
        cnt[{xx, yy}]++;  
    }  
      
    cout << ans << endl;  
}  
  
int main() {  
    int t;  
    cin >> t;  
    while (t--) {  
        solve();  
    }  
    return 0;  
}