#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int a,b,n ;
    int arr[10000] ;
    int c ;
    while(cin>>a>>b>>n){
        c = a%b ;
        cout<<a/b<<"." ;
        for (int i = 0; i < n ; i++)
        {   
            c *= 10 ; 
            arr[i] = c/b ;
            cout<<arr[i] ; 
            c %= b ;
        }
        cout<<"\n" ;
    }
   

    return 0;
}
