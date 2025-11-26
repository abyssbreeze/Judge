#include<bits/stdc++.h>
using namespace std ;

int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      int r,a ;
      int n ;
      int mi,ma ;
      cin>>r>>a ;
      if(r==a){
        a = a-3 ;
      }
      n = r-a ;
      mi = min(n,a) ;
      ma = max(n,a) ;
      cout<<mi<<"+"<<ma<<"="<<r<<"\n" ;

      return 0 ;
}
