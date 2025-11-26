#include<bits/stdc++.h>
using namespace std ;


int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      int n ;
      int t = 0 ;
      int c = 1 ;
      while (cin>>n)
      {
        if(n<0){
          break ;
        }
        t = 0 ;
        for(int i = 1 ; i< n ; i++){
          if(pow(2,i)>=n){
            t = i ;
            break ;
          }
        }
        cout<<"Case "<<c<<": "<<t<<"\n" ;
        c++ ;
      }
      

      return 0 ;
}
