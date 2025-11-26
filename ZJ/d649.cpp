#include<bits/stdc++.h>
using namespace std ;


int main(){
      cin.sync'_with_stdio(0) ;
      cin.tie(0) ;

      int n ;
      while(cin>>n){
      if(n==0){
        break ;
      }
      for (int i = 1; i <=n ; i++)
      {
        for (int j = n-i ; j > 0 ; j--)
        {
          cout<<"_" ;
        }
        for (int j = 1 ; j <=i ; j++)
        {
          cout<<"+" ;
        }
        cout<<"\n" ;
      }
      }
      

      return 0 ;
}
