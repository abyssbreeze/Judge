#include<bits/stdc++.h>
using namespace std ;


    int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      int n ;
      while (cin>>n)
      {
        if(n==0){
          break ;
        }
        cout<<n*(n+1)*(2*n+1)/6<<"\n" ;
      }
      
      return 0 ;
}
