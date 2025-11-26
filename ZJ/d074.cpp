#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    int ans = 0 ;
    cin>>n ;
    int p[n] ;
    for(int i = 0 ; i<n ; i++){
        cin >>p[i] ;
    }
    for(int i = 0 ; i<n ; i++){
        if(p[i]>ans){
            ans = p[i] ;
        }
    }
    cout<<ans<<"\n" ;

  return 0 ;
}
