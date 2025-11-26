#include<bits/stdc++.h>
using namespace std ;

int main(){
   int n ;
   int num ;
   int m = 0 ;
   cin>>n ;
   int f[n] ;
   for(int i = 0 ;i<n ; i++){
        cin>>num ;
        f[i] = num ;
   }
    for(int i = 1 ; i<=n ; i++){
        m += i*f[i-1] ;
    }
    cout<<m<<"\n" ;
}
