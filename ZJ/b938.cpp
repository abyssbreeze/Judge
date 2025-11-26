#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;
    
    
    long long n,m ;
    cin>>n>>m ;
    long long arr[n] ;
    long long kp ;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1 ;
    }
    
    for (int i = 0; i < m ; i++)
    {
        cin>>kp ;
        if(kp>=n){
            cout<<"0u0 ...... ?\n" ;
        }
        else if(arr[kp-1]==0){
            cout<<"0u0 ...... ?\n" ;
        }
        else if(arr[kp]==0){
            while (arr[kp]==0)
            {
                kp++ ;
                if(kp>=n) {
                    cout<<"0u0 ...... ?\n" ;
                    break;
                }
                else if(arr[kp]!=0){
                    cout<<arr[kp]<<"\n" ;
                    arr[kp] = 0 ;
                    break;  
                }              
            }
            
        } 
        else{
            cout<<arr[kp]<<"\n" ;
            arr[kp] = 0 ;    
        }
        
         
    }
    
    return 0 ;
}
