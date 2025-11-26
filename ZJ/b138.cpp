#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0) ; 
    cin.tie(0) ;

    int apple[10];
    int height;
    int n = 0 ;
    for (int i = 0; i < 10 ; i++)
    {
        cin >>apple[i];
    }
    cin>>height;
    for (int i = 0; i < 10; i++)
    {
        if(height+30>=apple[i]){
            n++;
        }
    }
    cout<<n ;

    return 0;
}
