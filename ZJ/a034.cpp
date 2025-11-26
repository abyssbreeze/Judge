#include<bits/stdc++.h>
using namespace std ;

int main(){
    // cin.sync_with_stdio(0) ;
    // cin.tie(0) ;

    int n ;
    int l ;
    int N[100000] ;
    while(cin>>n){
        l = 0 ;
        while(n>0){
            N[l] = n%2 ;
            l++ ;
            n /= 2 ;
        }
        while (l--){
            cout<<N[l] ;
        }
        cout<<"\n" ;
    }

  return 0 ;
}
