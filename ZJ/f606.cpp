#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define minint 2147483647

int main() {
    io;

    int n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    // 用你的變數名 q：儲存流量矩陣
    // 這裡改用 vector 避免 VLA 無法初始化的問題
    vector<vector<int>> q(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // 修正：這裡是 m 個城市
            cin >> q[i][j];
        }
    }

    ll mi = -1; // 用來存最小的總花費，初始化為 -1 方便判斷第一次

    for (int h = 0; h < k; h++) {
        // 用你的變數名 flow：每個方案重新統計「城市對城市」的流量
        // 必須放在迴圈內，確保每個方案開始前都是 0
        vector<vector<ll>> flow(m, vector<ll>(m, 0));
        
        for (int i = 0; i < n; i++) {
            int city; // 伺服器 i 放在哪個城市
            cin >> city;
            for (int j = 0; j < m; j++) {
                flow[city][j] += q[i][j];
            }
        }

        // 用你的變數名 cost：計算「當前方案」的總費用
        ll cost = 0; 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (flow[i][j] == 0) continue;

                if (i == j) {
                    cost += flow[i][j]; // 規則 u=v: 每單位 1 元
                } else {
                    // 規則 u!=v: 你的分段計費邏輯
                    if (flow[i][j] > 1000) {
                        cost += 3000 + (flow[i][j] - 1000) * 2;
                    } else {
                        cost += flow[i][j] * 3;
                    }
                }
            }
        }

        // 用你的變數名 mi：找出所有方案中最省錢的
        if (mi == -1 || cost < mi) {
            mi = cost;
        }
    }

    cout << mi << endl;
        
    return 0;
}
