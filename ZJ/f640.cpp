#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807


long long calc() {
    string s;
    cin >> s;

    if (s == "f") {
        long long x = calc();
        return 2 * x - 3;
    }

    if (s == "g") {
        long long x = calc();
        long long y = calc();
        return 2 * x + y - 7;
    }

    if (s == "h") {
        long long x = calc();
        long long y = calc();
        long long z = calc();
        return 3 * x - 2 * y + z;
    }

    return stoll(s) ;  
}

int main() {
    io ;

    cout << calc() << endl ;
    
    return 0 ;
}
