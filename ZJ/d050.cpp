#include<bits/stdc++.h> 
using namespace std ;

int main(){
	int a ;
	int b ;
	int c ;
	cin>>a ;
	b = a*60-900; 
	if(b<0){
	c = (b/60)+24;
	}
		else{
			c = b/60 ;
		}
	cout<<c<<'\n' ;
}
