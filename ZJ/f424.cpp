#include<bits/stdc++.h>
using namespace std ;


    int main(){
      cin.sync_with_stdio(0) ;
      cin.tie(0) ;

      long long arr[100] ;
      long long n ;
      arr[0] = 1 ;
      arr[1] = 3 ;
      for (int i = 2; i < 100; i++)
      {
        arr[i] = arr[i-1] + arr[i-2] ;
      }
      cin>>n ;
      cout<<arr[n-1]<<"\n" ;

      return 0 ;
}
