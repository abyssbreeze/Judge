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

    int n ;

    cin>>n ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = n-i ; j>0 ; j--) cout<<' ' ;
        for (int j = 1 ; j<=(2*i-1) ; j++) cout<<'*' ;
        cout<<'\n' ;
    }
  
    return 0 ;

}
