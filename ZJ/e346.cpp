#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(0)



int main(){
    io ;

    ll n ;
    cin>>n ;
    vector<ll> arr(n+5,0) , sum(n+5,0) ;
    ll q ;
    ll l , r ;
    for (ll i = 0; i < n; i++){
        cin>>arr[i] ;
    }
    for (ll i = 1 ; i <= n; i++){
        sum[i] = sum[i-1] + arr[i-1] ;
    }
    cin>>q ;
    for (ll i = 0 ; i < q ; i++){
        cin>>l>>r ;
        cout<<sum[r]-sum[l-1]<<"\n" ;
    }
   
    return 0 ;

}
