#include<bits/stdc++.h> 
using namespace std ;

int main(){
	int a ;
	int b ;
	int c ;
	int d ;
	cin>>a ;
	if(a<=2500){
		b = 1 ; 
		if(a%25==0){
			c = a/25 ;
			d = 25 ;
		}
		else {
			c = (a/25)+1 ;
			d = a%25 ;
		}
	}
	else if (2500<a && a<=7500){
		b = 2 ; 
		if(a%50==0){
			c = (a-2500)/50 ;
			d = 50 ;
		}
		else {
			c = ((a-2500)/50)+1 ;
			d = (a-2500)%50 ;				
		}
	}
	else if (7500<a && a<=10000){
		b = 3 ; 
		if(a%25==0){
			c = (a-7500)/25 ;
			d = 25 ;
		}
		else {
			c = ((a-7500)/25)+1 ;
			d = (a-7500)%25 ;
		}
	}
	cout<<b<<" "<<c<<" "<<d<<'\n' ;
}
