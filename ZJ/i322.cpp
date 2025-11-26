#include<bits/stdc++.h>
using namespace std;

void h(int n , char a , char b , char c){
    if(n==1){
        cout<<"Move disc "<<n<< " from "<<a<<" to "<<c<<"\n" ;
    }
    else{
        h(n-1,a,c,b) ;
        cout<<"Move disc "<<n<< " from "<<a<<" to "<<c<<"\n" ;
        h(n-1,b,a,c) ;

    }
}


int main()  {
    cin.tie(0); 
    ios::sync_with_stdio(false); 
    
    int n ;
    cin>>n ;
    h(n,'A','B','C') ;
     
  
    return 0 ;

}
