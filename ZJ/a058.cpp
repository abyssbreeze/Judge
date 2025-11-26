#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int n ;
	int k ; 
	int a,b,c = 0 ;
	cin>>n ;
	for(int i = 1 ; i<=n ; i++){
		cin>>k ;
		if(k%3==0){
			a++ ;
		}
		else if(k%3==1){
			b++ ;
		}
		else if(k%3==2){
			c++ ;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n" ;
}
