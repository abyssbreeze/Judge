#include<iostream>
using namespace std;

int main(){
	int n ;
	int p ; //平面 
	int s ; //空間 
	while(cin>>n){
		s = 1 ;
		for(int i = 1 ; i<=n; i++){
			p = (i*i-i+2)/2 ;
			s += p ;
		}
		cout<<s<<"\n" ;
	}
}
