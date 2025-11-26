#include<iostream>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;
	
	int a,b ;
	int s,h ;
	int sum = 0;
	cin>>a>>b ;
	if(a<=b){
		s = a ;
		h = b ;
	}
	else if(a>b){
		s = b ;
		h = a ;
	}
	for(int i = s ; i<=h ; i++){
		if(i%2==0){
			sum +=i ;
		}
	}
	cout<<sum<<"\n" ;
}
