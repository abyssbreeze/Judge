#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

#define ll long long 



int main(){
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int x1 , x2 , y1 , y2 ;

    while (cin>>x1>>y1>>x2>>y2){
        if (x1==0 && y1==0 && x2==0 && y2==0){
            break ;
        }
        
        if((x1 == x2) && (y1 == y2)){
            cout << 0;
        }
        else if((x1 == x2) || (y1 == y2)){
            cout << 1;
        }
        else if(abs(x1-x2) == abs(y1-y2)){
            cout << 1;
        }
        else{
            cout << 2;
        }
        cout<<'\n' ;
    }
    

    return 0 ; 

}
