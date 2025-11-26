#include <bits/stdc++.h>
using namespace std;

int main(){
	int i ;
	int n ;
	int ans ;
	cin>>i ;
	while(true){
		cin>>n ;
		if(n == 0){
			break ;
		}
		if(n % i ==0 ){
			ans = n/i ;
			cout<<ans<<'\n' ;
		}
		else{
			ans = i-(n%i) ;
			cout<<ans<<'\n' ;
		}
	}
	
	return 0 ;

}
