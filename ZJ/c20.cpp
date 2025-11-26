#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int n ;
    int t = 1 ;
    cin>>n ;
    for(int i = 1 ; i<=n ; i++){
        for(int j = n-i ; j>0 ; j--){
            cout<<"_" ; 
        }
        for(int k = 1 ; k<=t ; k++){
            cout<<"*" ;
        }
        for(int j = n-i ; j>0 ; j--){
            cout<<"_" ; 
        }
        t += 2 ;
        cout<<"\n" ;
    }

  return 0 ;
}
