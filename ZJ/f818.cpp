#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n], w[n];
    int hw[n];
    int m = INT_MAX; // 初始化 m 為最大值
    int mi;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    for (int i = 0; i < n; i++) {
        hw[i] = h[i] * w[i];
        if (hw[i] < m) { // 比較是否小於 m
            m = hw[i];
            mi = i;
        }
    }

    cout << h[mi] << " " << w[mi];

    return 0;
}
