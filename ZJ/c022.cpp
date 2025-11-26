#include<bits/stdc++.h>
using namespace std ;

int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int t ;
    int a,b ;
    int sum ;
    cin>>t ;
    for(int i = 1 ; i<=t ; i++){
        sum = 0 ;
        cin>>a>>b ;
        for(int j = a ; j<=b ; j++){
            if(j%2==1){
                sum += j ;
            }
        }
        cout<<"Case "<<i<<": "<<sum<<"\n" ;
    }

  return 0 ;
}
