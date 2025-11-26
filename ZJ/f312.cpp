#include<bits/stdc++.h> 
using namespace std;
int main() {
    int A1,A2,A3,B1,B2,B3,n,Y1,Y2;
    cin >>A1>>A2>>A3>>B1>>B2>>B3>>n;
    int max = 0 ;
    for(int i=0;i<=n;i++){
        Y1=A1*i*i+A2*i+A3;
        Y2=B1*(n-i)*(n-i)+B2*(n-i)+B3; 
        max=std::max(Y1+Y2,max);
    }
    cout<<max;
    return 0;
}
