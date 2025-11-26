#include<bits/stdc++.h>
using namespace std ;


int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int n,m ;
    int f ;
    int l,r ;
    int sum ;
    while(cin>>n>>m){
      int arr[n+1] = {0} ;
      for (int i = 1; i <= n; i++){
        cin>>f ;
        arr[i] = arr[i-1] + f ;
      }
      for (int i = 0; i < m; i++){
        cin>>l>>r ;
        sum = arr[r] - arr[l-1] ;
        cout<<sum<<"\n" ;
      }
    }
    return 0 ;
}
