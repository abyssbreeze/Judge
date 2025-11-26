#include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      int n ;
      int g,a,h,w ;
      double ans ;
      cin>>n ;
      for (int i = 0; i < n; i++)
      {
        cin>>g>>a>>h>>w ;
        if(g==1){
          ans = (13.7*w) + (5*h) - (6.8*a) + 66 ;
        }
        else if(g==0){
          ans = (9.6*w) + (1.8*h) - (4.7*a) + 655 ;
        }
        cout<<fixed<<setprecision(2)<<ans<<"\n" ;
      }

      return 0 ;
}
