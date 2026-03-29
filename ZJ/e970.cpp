#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 


int main() {
    io ;

    int n ;
    int b ;
    int m ;
    int sum = 0 ;
    cin>>n ;
    int r[n+5] ;
    for (int i = 1 ; i <= n ; i++){
        cin>>r[i] ;
    }
    b = r[n] ;
    for (int i = 1 ; i <= n ; i++){
        if (i%b==1){
            sum += r[i] ;
        }
    }  
    m = sum % n ;

    if (m==0){
        cout<<n<<' '<<r[n] ;
    }
    else{
        cout<<m<<' '<<r[m] ;
    }
    
    return 0 ;

}
