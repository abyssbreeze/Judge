#include<bits/stdc++.h>
using namespace std ;


int main(){
    cin.sync_with_stdio(0) ;
    cin.tie(0) ;

    int m,n ;
    cin>>m>>n ;
    if(n==0||m%n==0){
        cout<<"OK!\n" ;
    }
    else{
        cout<<m%n<<"\n" ;
    }

  return 0 ;
}
