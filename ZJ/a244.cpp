#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n ;
	long long a , b , c ;
	long long ans ;
	cin>>n ;
	for(int i = 1 ; i<=n ; i++){
		cin>> a >> b >> c ;
		
		if(a==1){
			ans = b+c ;
			cout<<ans<<'\n' ;
		}
		else if(a==2){
			ans = b-c ;
			cout<<ans<<'\n' ;
		}
		else if(a==3){
			ans = b*c ;
			cout<<ans<<'\n' ;
		}
		else if(a==4){
			ans = b/c ;
			cout<<ans<<'\n' ;
		}
	}
	
	return 0 ;
}
