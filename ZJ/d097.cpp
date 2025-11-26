#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int n ;
    while(cin>>n){

   
    int arr[n] ;
    int arr2[n-1];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    for (int i = 0; i <n-1 ; i++)
    {
        arr2[i] = i+1 ;
    }
    
    bool jolly  = true;
    for (int i = 0; i<n-1 ; i++)
    {
        if( abs(arr[i] - arr[i+1]) >=1 && abs(arr[i] - arr[i+1])<=(n-1)){
            arr2[ abs(arr[i] - arr[i+1])-1] = 0 ;
        }
    }
    for (int i = 0; i < n-1 ; i++)
    {
        if(arr2[i]!= 0 ){
            jolly = false ;
            break;
        }
        else{
            jolly = true ;
        }
    }
    
    if(jolly){
        cout<<"Jolly\n" ;
    }
    else{
        cout<<"Not jolly\n" ;
    }
    
    }
  
    return 0;
}
