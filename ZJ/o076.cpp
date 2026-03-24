#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , h ;
    int pre = 0 ;
    int d = 0 , mad = 0 ;
    
    cin>>n ;
    for (int i = 0 ; i < n ; i++){
        cin>>h ;
        if(h >= pre){
            d = 0 ;
        }
        pre = h ;
        d++ ;
        mad = max(mad,d) ;
    }
    
    cout<<mad<<'\n' ;
  
    return 0 ;
  
}
