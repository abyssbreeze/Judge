#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int dp[10000][105] ;


int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n ;
    int v , c ;
    while (cin>>n){
        for (int i = 1 ; i <= n ; i++){
            cin>>v>>c ;
            for (int j = 1 ; j <= 100 ; j++){
                if(j>=v){
                    dp[i][j] = max(dp[i-1][j] , dp[i-1][j-v] + c ) ;
                }
                else{
                    dp[i][j] = dp[i-1][j] ;
                }
            }
        }
        
        cout<<dp[n][100]<<"\n" ;
    }
    

    return 0 ;

}
