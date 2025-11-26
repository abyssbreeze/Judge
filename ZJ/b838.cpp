#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int t ;
    int l , r ;
    int sum ;
    string str ;
    cin>>t ;
    for (int i = 0 ; i < t ; i++){
        cin>>str ;
        l = 0 ;
        r = 0 ;
        sum = 0 ;
        for (int j = 0 ; j < str.size() ; j++){
            if(str[j]=='('){
                l++ ;
                sum++ ;
            }
            else if(str[j]==')'){
                r++ ;
                sum-- ;
                if (sum<0){
                    break ;
                }
                
            }
        }
        if(l==r && sum == 0){
            cout<<l<<'\n' ;
        }
        else{
            cout<<0<<'\n' ;
        }
        
    }


    return 0 ; 

}
