#include <bits/stdc++.h>
  using namespace std;


  int main() {
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int n ;
    int s,d ;
    int sum = 0 ;
    cin>>n ;
    int sd[n] ;
    int sdi = 0 ;
    for (int i = 0; i < n ; i++)
    {
      cin>>s>>d ;
      if(d>100){
        sd[sdi] = s ;
        sdi++ ;
        sum += 5*(d-100) ;
      }
    }
    sort(sd,sd+sdi) ;
    for (int i = 0; i < sdi ; i++)
    {
      cout<<sd[i]<<" " ;
    }
    cout<<"\n" ;
    cout<<sum ;

    return 0 ;
  }
