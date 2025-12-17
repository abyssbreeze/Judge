#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;
	
	int n , k ;
	cin>>n>>k ;
	bool b = 0 ;
	if(n%k == 0) b = 1 ;
	
	stringstream ss ;	
	ss.str("");
	ss.clear();
	
	string s ;
	ss << n ;
	ss >> s ;
	
	for(int i = 0 ; i<s.size() ; i++){
		if(s[i] == k + '0') b = 1 ;
	}
	if(b) cout<<"YES" ;
	else cout<<"NO" ;
	
	return 0 ;		
}
