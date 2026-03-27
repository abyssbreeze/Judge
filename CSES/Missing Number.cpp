#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    ll n ;
    cin>>n ;
    ll num ;
    ll now_sum = 0 ;
    ll total_sum = n*(1+n)/2 ;
    
    for (ll i = 0 ; i < n-1 ; i++){
        cin>>num ;
        now_sum += num ;
    }

    cout<< total_sum - now_sum <<'\n' ;    
    
    return 0 ;

}
