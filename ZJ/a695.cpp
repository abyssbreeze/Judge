#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int i , n ;

    cin>>n ;
    for ( i = 2 ; i*i <= n; i++){
        if (n%i == 0){
            cout<<n/i<<"\n" ;
            break ;
        }
        
    }
    
    
    return 0 ; 

}
