#include<bits/stdc++.h>
using namespace std ;

int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      
      int h,m,s ;
      while(cin>>h>>m>>s){
        if(h*s>=m){
          cout<<h<<' '<<m<<' '<<s<<". I will make it!\n" ;
        }
        else{
          cout<<h<<' '<<m<<' '<<s<<". I will be late!\n" ;
        }

      } 
      
      return 0 ;
}
