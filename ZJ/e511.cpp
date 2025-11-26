#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

        int t ;
        int n ;
        int x  ;
        int min,max ; 
        int d ;
        cin>>t ;
        for(int i = 1 ; i<=t ; i++){
            min = 100 ;
            max = 0 ;
            cin>>n ;
            for(int j = 1 ; j<=n ;j++){
                cin>>x ;
                if(x<=min){
                    min = x ;
                }
                if(x>=max){
                    max = x ;
                }
            }
            d = (max - min)*2 ;
            cout<<d<<"\n" ;
        } 

  return 0 ;
}
