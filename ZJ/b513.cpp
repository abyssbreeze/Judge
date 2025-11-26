#include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

     int n ;
     int num ;
     bool b = false;
     cin>>n ;
     for(int i = 0 ; i<n ; i++){
      cin>>num ;
      for (int j = 2; j<num ; j++){
        if(num%j==0){
          b = true ;
        }
      }
      if(b){
        cout<<"N\n" ;
      }
      else{
        cout<<"Y\n" ;
      }
      b = false ;
     }

     return 0 ;
}
