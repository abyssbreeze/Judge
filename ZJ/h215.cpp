#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n ;
    int sum ;

    cin>>n ;
    sum =   (n*(n+1)*(2*n+1)) / 6 ;

    cout<<sum<<'\n' ;

    return 0 ; 

}
