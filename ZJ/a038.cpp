#include<bits/stdc++.h>
using namespace std ;


int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    long long n ;
    string str ;
    stringstream ss ;
    ss.str("") ;
    ss.clear() ;
    cin>>str ;
    
    reverse(str.begin( ), str.end()) ;
    ss<<str ;
    ss>>n ;
    cout<<n<<"\n" ;

  return 0 ;
}
