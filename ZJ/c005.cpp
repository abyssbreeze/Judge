#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    int f ;
    long long mm , num , l ;
    long long sum ;
    cin>>n ;
    for(int i = 1 ; i<=n ; i++){
        cin>>f ;
        sum = 0 ;
        for(int j = 1 ; j<=f ; j++){
            cin>>mm>>num>>l ;
            sum += mm*l ;
        }
    cout<<sum<<"\n" ;
    }

    return 0 ;
}
