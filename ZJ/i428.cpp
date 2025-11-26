#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n ;
    int ma = 0 , mi = 100000 ;
    cin>>n ;
    int x[n+5] , y[n+5] ;
    for (int i = 0 ; i < n ; i++){
        cin>>x[i]>>y[i] ;
    }
    for (int i = 1 ; i < n ; i++){
        ma = max(ma , abs( x[i] - x[i-1] ) + abs( y[i] - y[i-1])) ;
        mi = min(mi , abs( x[i] - x[i-1] ) + abs( y[i] - y[i-1])) ;
    }
    cout<<ma<<' '<< mi <<'\n' ;
    
    
    
    return 0 ; 

}
