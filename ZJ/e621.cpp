#include <bits/stdc++.h>
using namespace std;


int main() {
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int n ;
  int a,b,c ;
  bool fps = 0 ;
  cin>>n ;
  for (int i = 0 ; i < n ; i++)
  {
    fps = 0 ;
    cin>>a>>b>>c ;
    for (int j = a+1 ; j < b ; j++)
    {
      if(j%c!=0){
        cout<<j<<" " ;
        fps = 1 ;
      }
    }
    if(fps==0){
      cout<<"No free parking spaces." ;
    }
    cout<<"\n" ;
  }

  return 0 ;
}
