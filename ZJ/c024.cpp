#include<bits/stdc++.h>
using namespace std ;

int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      long long n ;
      while (cin>>n)
      {
        if(n<0){
          break ;
        }
        cout<<1+(n*(n+1))/2<<"\n" ;
      }
      

      return 0 ;
}
