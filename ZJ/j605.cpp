#include<bits/stdc++.h>
using namespace std ;

int main(){
  sync_with_stdio(false) ;
	cin.tie(0) ;
	
	int k ;
	cin>>k ;
	
	int t[k] , s[k] ;
	int ma = -2 , mat ,sum  , st = 0 ;
	for(int i = 0 ; i<k ; i++){
		cin>>t[i] >> s[i] ;
		if(s[i]== -1) st++ ;	
	}
	
	for(int i = 0 ; i<k ; i++){
		if(s[i] > ma){
			ma = s[i] ;
			mat = t[i] ;
		}
	}
	sum = ma - k - st*2  ;
	if(sum<0) sum = 0 ;
	
	cout<<sum<<' '<<mat<<'\n' ;
	
	return 0 ;
}
