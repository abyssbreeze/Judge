#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    int n ;
    cin>>n ;
    long long arr[n] ;
    long long sum[n] ;
    long long diff[n] ;
    for (int i = 0 ; i < n ; i++)
    {
        cin>>arr[i] ;
    }
    sum[0] = arr[0] ;
    diff[0] = sum[0] ;
    for (int i =  1 ; i < n; i++)
    {
        sum[i] = sum[i-1] + arr[i] ;
    }
    for (int i = 1; i < n; i++)
    {
        diff[i] = arr[i] - arr[i-1] ;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<diff[i]<<" " ;
    }


    return 0 ;

}
