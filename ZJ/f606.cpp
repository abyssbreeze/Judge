#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint -2147483648
#define minint 2147483647
#define maxll -9223372036854775808
#define minll 9223372036854775807


int main() {
    io ;

    ll n , m , k ;
    ll mi = minll ;
    ll city ;
    ll cost ;
    cin>>n>>m>>k ;
    
    ll q[n+5][m+5] = {} ;
    ll flow[m+5][m+5] = {} ;

    
    for (ll i = 0 ; i < n ; i++){
        for (ll j = 0 ; j < m ; j++){
            cin>>q[i][j] ;
        }
    }
    for (ll h = 0 ; h < k ; h++){
        memset(flow, 0, sizeof(flow));
        for (ll i = 0 ; i < n ; i++){
            cin>>city ;
            for (ll j = 0 ; j < m ; j++){
                flow[city][j] += q[i][j] ;
            }
        }
        cost = 0 ;    
        for(ll i=0;i<m;i++){
            for(ll j=0;j<m;j++){
                if(i==j) cost+=flow[i][j];
                else{
                    if(flow[i][j]<=1000) cost += 3*(flow[i][j]) ;
                    else cost += 3000+2*(flow[i][j]-1000);
                }
            }
        }
        mi = min(cost,mi) ;
    }    
    
    cout<<mi<<'\n' ;
        
    return 0 ;

}
