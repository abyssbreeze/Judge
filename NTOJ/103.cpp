#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define io ios::sync_with_stdio(0);cin.tie(0); 
#define maxint -2147483648
#define minint 2147483647
#define maxll -9223372036854775808
#define minll 9223372036854775807

int main() {
    io ;

    string a , b ;
    string str1 , str2 ;

    cin>>str1>>a ;
    cin>>str2>>b ;
    if(str1==str2 && a==b) cout<<"GOOD\n" ;
    else if(str1==str2 || a==b) cout<<"=~=\n" ;
    else cout<<"OTZ\n" ;

    return 0 ;

}
