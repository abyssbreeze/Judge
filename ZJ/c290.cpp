#include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    int main(){
      // cin.sync_with_stdio(0) ;
      // cin.tie(0) ;

      int n ;
      string str ;
      int a = 0 ,b = 0 ;
      int len ;
      cin>>str  ;
      len = str.size() ;
      for(int i = 0 ;i<len ;i+=2){
        a+= (str[i]-'0') ;
      }
      for(int i = 1 ;i<len ;i+=2){
        b+= (str[i]-'0') ;
      }
      cout<<abs(a-b) <<"\n" ;

      return 0 ;
}
