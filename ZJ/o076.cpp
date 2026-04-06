#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , h ;
    int pre = 0 ;
    int d = 0 , ma_d = 0 ;
    
    cin>>n ;
    for (int i = 0 ; i < n ; i++){
        cin>>h ;
        if(h >= pre){
            d = 0 ;
        }
        pre = h ;
        d++ ;
        ma_d = max(ma_d,d) ;
    }
    
    cout<<ma_d<<'\n' ;
  
    return 0 ;
  
}
