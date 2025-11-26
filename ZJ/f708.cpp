#include<bits/stdc++.h>
using namespace std ;

int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      int m,n ;
      cin>>m>>n ;
      int h ;
      int sum1 = 0 , sum2 = 0 ;
      for (int i = 0; i < m ; i++)
      {
        cin>>h ;
        sum1 += h ;
      }
      for (int i = 0; i < n ; i++)
      {
        cin>>h ;
        sum2 += h ;
      }
      if(m>n&&sum1>sum2){
        cout<<"Yes\n" ;
      }
      else{
        cout<<"No\n" ;
      }

      return 0 ;
}
