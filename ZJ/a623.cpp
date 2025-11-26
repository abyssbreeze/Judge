#include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    
    int i(int n){
      int ans = 1 ;
      for (int i = 1; i <= n; i++) {
        ans *= i;
      }
      return ans ;
    }
    int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

     int n,m ;
     int ans ;
     while(cin>>n>>m){
       ans = i(n)/(i(m)*i((n-m))) ;
     cout<<ans<<"\n" ;
     }
    
    return 0 ; 
}
