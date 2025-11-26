#include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    int main(){
      // cin.sync_with_stdio(0) ;
      // cin.tie(0) ;

      int n ;
      char ch ;
      char eq ;
      int num ;
      int ans ;

      cin>>n>>ch>>eq>>num ;
      ans = num/n ;
      cout<<ch<<" "<<eq<<" "<<ans<<"\n" ;

      return 0 ;
}
