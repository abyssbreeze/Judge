#include<iostream>
#include<sstream>
#include<cstring>
using namespace std ;


int main(){
	int t ;
	int n ;
	string s = " " ;
	int m[100000] = {0}  ;
	int ans ;
	stringstream ss ;
	cin>>t ;
	for(int a = 0 ; a<t ; a++){
		ss.str(""); // 初始化
		ss.clear(); // 初始化
		ans = 1 ;
		cin>>n ;
		ss << n ;
		ss >> s ;
		for(int b = 0 ; b<s.size()/*3*/ ; b++){
		ss.str(""); // 初始化
		ss.clear(); // 初始化
		ss<<s[b] ;
		ss>>m[b] ;
		}
		for(int c = 0 ; c<s.size() ; c++){
			ans=ans*m[c];
		}
		
		cout<<ans<<endl ;
		
		
	}
	
}
