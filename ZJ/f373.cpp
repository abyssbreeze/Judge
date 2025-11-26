#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n ;
    cin>>n ;
    bool com = 0 ;
    int day , chi ;

    day = n - (n/2000)*200 ;
    chi = n - (n/1000)*100 ;
    if(day<=chi){
        com = 0 ;
        cout<<day<<" "<<com ;
    }
    else if(chi<day){
        com = 1 ;
        cout<<chi<<" "<<com ;
    }

    return 0;
}
