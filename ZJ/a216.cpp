#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int n ;
	long long f ;
	long long g ;
	while(cin>>n){
		g = 0 ; 
		f = n*(n+1) /2 ;
		for(int i = 1 ; i<=n ; i++){
			g += (i*(i+1)/2) ;
		}
		if(n==1){
			g = 1 ;
		}
		cout<<f<<" "<<g<<"\n" ; 
	}
}
