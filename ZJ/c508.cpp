#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n ;
    int num[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>num[i] ;
    }
    sort(num,num+n) ;
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" " ;
    }
    cout<<"\n" ;
    for (int i = 0; i < n-1; i++)
    {
        if(num[i]==num[i+1]){
            num[i] = -1 ;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(num[i]!=-1){
            cout<<num[i]<<" " ;
        }
        else{
            continue ;
        }
    }
    


    return 0;
}
