#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, c, d;
  while (cin >> a >> b >> c >> d) {
    int sum = 0;
    sum += d;
    sum += c;
    a -= 37 * c;
    sum += ceil(b / 8.0);
    a -= 8 * (b % 8);
    if (a > 0) {
      sum += ceil(a / 64.0);
    }
    cout << sum<<'\n';
  }

  return 0 ;
}
