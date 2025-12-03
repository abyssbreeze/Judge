#include<bits/stdc++.h>
using namespace std ;

int main (){
	
	
	int a , b ;
	int n ;
	cin>>a>>b>>n ;
	int sum_time = a+b ;
	int time ;
	int wait = 0 ;
	for(int i = 0 ; i<n ; i++){
		cin>>time ;
		time %= sum_time ;
		if(time < a) wait += 0 ;
		else wait += b - (time - a ) ;
	}
	
	cout<<wait<<'\n' ;
	
	
	return 0 ;
	
}
