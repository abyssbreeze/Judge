#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

        int n ;
        int a,b,c ;
        cin>>n ;
        cin>>a>>b>>c ;
        for(int i = n ; i>0 ; i--){
            if(i==a||i==b||i==c){
                continue ;
            }
            cout<<"No. "<<i<<"\n" ;
        }

  return 0 ;
}
