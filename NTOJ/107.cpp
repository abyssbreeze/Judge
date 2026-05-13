#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint INT_MIN //-2147483648
#define minint INT_MAX //2147483647
#define maxll LLONG_MIN //-9223372036854775808
#define minll LLONG_MAX //9223372036854775807


int main() {
    io ;

    ll num = 2 ;
    for (int i = 0 ; i < 25 ; i++){
        num = num*2+1 ;
        if (num%71==0){
            break ; 
        }
    }
    if (num%3==0) cout<<"right" ;
    else cout<<"left" ;

    return 0 ;

}
