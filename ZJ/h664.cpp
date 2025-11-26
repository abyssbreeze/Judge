#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

void h(int n , char a , char b , char c){
    if(n==1){
        cout<<"Move disc "<<n<< "from "<<a<<" to "<<c<<"\n" ;
    }
    else{
        h(n-1,a,c,b) ;
        cout<<"Move disc "<<n<< " from "<<a<<" to "<<c<<"\n" ;
        h(n-1,b,a,c) ;

    }
}

int hh(int n){
    return (1<<n) - 1 ;
}

int main()  
{
    cin.tie(0); 
    ios::sync_with_stdio(false); 
    
    // int n ;
    // cin>>n ;
    // h(n,'A','B','C') ;
     
    int t ;
    int n , s ;
    
    cin>>t ;
    for (int i = 0; i < t ; i++)
    {
        cin>>n>>s ;
        while (s)
        {
            if (s == hh(n-1)+ 1 )
            {
                cout<<n<<"\n" ;
                break ;
            }
            else if(hh(n-1)+1 < s){
                s -= hh(n-1)+1 ;
            }
            n-- ;
        }
    }
    
  
    return 0 ;

}
