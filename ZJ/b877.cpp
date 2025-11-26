#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int a,b ;
    int t ;
    cin>>a>>b ;
    t = b>=a ? b-a : (b-a)+100 ;
    cout<<t ;

  return 0 ;
}
