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
        // ����������Ҫ�ҵ�(x - xx) % x �� yy ��Ӧ��cntֵ��������ӵ�ans��  
        ans += cnt[{((x - xx) % x, yy}];  
        // ����(xx, yy)��cnt�еļ���  
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