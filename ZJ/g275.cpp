#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 


int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;
    
    int n ;
    bool c = true ;
    
    cin>>n ; 
    int a[7] , b[7] ;
    for (int i = 0 ; i < n ; i++){
        c = true ;
        for (int j = 0 ; j < 7; j++) cin>>a[j] ;
        for (int j = 0 ; j < 7; j++) cin>>b[j] ;
        if(!(a[1]!=a[3]&&a[1]==a[5]&&b[1]!=b[3]&&b[1]==b[5])){
            cout<<'A' ;
            c = false ;
        }
        if(!(a[6]==1&&b[6]==0)){
            cout<<'B' ;
            c = false ;
        }
        if(!(a[1]!=b[1]&&a[3]!=b[3]&&a[5]!=b[5])){
            cout<<'C' ;
            c = false ;
        }
        if(c){
            cout<<"None" ;
        }
        cout<<"\n" ;
    }
    
   
    return 0 ; 

}
