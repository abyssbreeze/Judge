#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 


int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;
    
    ll b , p , m ;
    ll ans = 1 ;

    while (cin>>b>>p>>m){
        ans = 1 ;
        ll base = b % m ;
         while (p){
            if(p & 1){
                ans = (ans * base) % m ;
            }
            base = (base * base) % m ;
            p >>= 1 ;
        }   
        cout<<ans<<'\n' ;
    }
    
    
    return 0 ; 

}
