#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807


string s ;
int pos = 0 ;

long long DF_expression(int size) {
    char c = s[pos] ;
    pos++ ; 
    if (c == '0') {
        return 0 ;
    }

    if (c == '1') {
        return size * size;
    }

    int half = size / 2;
    long long up_left  = DF_expression(half) ;
    long long up_right = DF_expression(half) ;
    long long down_left  = DF_expression(half) ;
    long long down_right = DF_expression(half) ;

    return up_left + upr_ight + down_left + down_right;
}

int main() {
    io ;

    int n ;
    cin >> s >> n ;

    cout << DF_expression(n) << '\n' ;

    return 0 ;
}
