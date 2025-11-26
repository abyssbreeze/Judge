#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int a,b ;
	int sum = 0 ;
	cin>>a>>b ;
	for(int i = a ; i<=b ; i++){
		if(i%2==0){
			sum += i ;
		}
	}
	cout<<sum<<"\n" ;
}
