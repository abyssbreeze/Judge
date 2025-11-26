#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 

ll dp[105] = {0} ;



void fun(){

    for (int i = 3 ; i <= 100; i++){
        dp[i] = dp[i-1] + dp[i-2] ;
    }
    

}

int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n ;
    dp[1] = 1 ;
    dp[2] = 2 ;

    fun() ;

    while(cin>>n){
        cout<<dp[n]<<"\n" ;
    }


    return 0 ; 

}
