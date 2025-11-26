#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n , m ;
    int sum ;

    cin>>n>>m ;
    sum =   6 + (4*(m-1)) + ((n-1)*(3*m+2)) ;

    cout<<sum<<'\n' ;

    return 0 ; 

}
