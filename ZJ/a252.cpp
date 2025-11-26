#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int dp[105][105][105] ;


int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    string str1 , str2 , str3 ; 

    cin>> str1 >> str2 >> str3 ;
    int l1 = str1.size() ;
    int l2 = str2.size() ;
    int l3 = str3.size() ;

    for (int i = 1 ; i <= l1 ; i++){
        for (int j = 1 ; j <= l2 ; j++){
            for (int k = 1 ; k <= l3 ; k++){
                if (str1[i-1] == str2[j-1] && str2[j-1] == str3[k-1]){
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1 ; 
                }
                else{
                    dp[i][j][k] = max(dp[i-1][j][k] , max(dp[i][j-1][k] , dp[i][j][k-1]) ) ;
                }
            }
        }
        
    }
    cout<<dp[l1][l2][l3] ;    

    return 0 ;

}
