#include <bits/stdc++.h>
using namespace std;


int main() {
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int n ;
  int k ;
  while(cin>>n>>k){
    if(n==0){
      cout<<"Ok!\n" ;
  }
  else if(k==0){
    cout<<"Impossib1e!\n" ;
  }
  else if(n%k==0){
    cout<<"Ok!\n" ;
  }
  else{
    cout<<"Impossib1e!\n" ;
  }
  }
  

  return 0 ;
}
