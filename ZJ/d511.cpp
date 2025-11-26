#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int t[3] ;
	int sum = 0 ;
	for(int i = 1 ; i<=5 ; i++){
		for(int j = 0 ; j<3 ; j++){
			cin>>t[j] ;
		}
	    sort(t,t+3) ;
		if( t[0] + t[1] >t[2] ){
			sum++ ;
		}	
	}
	cout<<sum<<"\n" ;
}
