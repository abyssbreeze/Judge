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
  
    ll a , b ;
    ll sum = 0 ; 
    cin>>a>>b ;
    ll first = (a%2==0?a:a+1) ;
    ll last = (b%2==0?b:b-1) ;
    ll n = (last - first)/2+1 ;
    sum = (first+last)*n/2 ;
    cout<<sum<<'\n' ;

    return 0 ;

}
