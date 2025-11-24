#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n ;
    string str ;

    map<string , char> mp ;
    mp = 
    {    
        {"0 1 0 1", 'A'},
        {"0 1 1 1", 'B'},
        {"0 0 1 0", 'C'},
        {"1 1 0 1", 'D'},
        {"1 0 0 0", 'E'},
        {"1 1 0 0", 'F'}
    };
    


    while(cin>>n){ 
        getline(cin,str) ;
        for (int i = 0 ; i < n; i++){
            getline(cin,str) ;
            cout<<mp[str] ;

        }
        cout<<"\n" ;
    }
    
    return 0 ; 

}
