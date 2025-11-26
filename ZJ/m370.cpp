#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int x,n;
    cin>>x>>n ;
    int all_food[201]  = {0};
    int food;
    int big = 0 , small = 0 ;
    int biggest = -100 , smallest  = 100; 
    for (int i = 0; i < n ; i++)
    {
        cin>>food;
        all_food[i] = food ;
        if(food>x){
            big++;
            if(food>biggest){
                biggest  =food;
            }
        }
        else if(food<x){
            small++;
            if(food<smallest){
                smallest = food;
            }
        }
    }
    if(small>big){
            cout<<small<<" "<<smallest ;    
        }
    else{
        cout<<big<<" "<<biggest ;
    }
    

    return 0;
}
