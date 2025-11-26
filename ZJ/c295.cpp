#include<bits/stdc++.h>
using namespace std ;

int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      
      int n,m ;
      int num ;
      int ma ;
      int sum ;
      bool t = false ;
      int sp = 0 ; 
      cin>>n>>m ;
      int ms_n[n] ;
      for (int i = 0 ; i < n ; i++)
      {
        ma = 0 ;
        for (int j = 0 ; j < m ; j++)
        {
          cin>>num ;
          ma = max(num,ma) ;
        }
        ms_n[i] = ma ;
        sum += ma ;
      }
      cout<<sum<<"\n" ;
      for (int i = 0 ; i < n ; i++)
      {
        if(sp==0){
          if(sum % ms_n[i] == 0){
          t = true ;
          cout<<ms_n[i];
          sp++ ;
          }
        }
        else if(sp!=0){
          if(sum % ms_n[i] == 0){
          t = true ;
          cout<<' '<<ms_n[i] ;
          }
          
        }
      }
      if(!t){
        cout<<-1<<"\n" ;
      }
      
      

      return 0 ;
}
