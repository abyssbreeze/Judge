#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a>b){
        swap(a,b) ;
    }
    if(b%a!=0){
        return gcd(a , b%a) ;
    }
    return a ;
}

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;
    
    int a,b ;
    cin>>a>>b ;
    cout<<gcd(a,b) ;
   

    return 0;
}
