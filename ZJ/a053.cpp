#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int n ;
	int ans = 0 ;
	
	cin>>n ;
	 
	if(n>=0&n<=10){
		for(int i = 1 ; i<=n ; i++){
			ans += 6 ;
		}
	}
	else if(n>=11&n<=20){
		for(int i = 1 ; i<=10 ; i++){
			ans += 6 ;
		}
		for(int i = 1 ; i<=(n-10) ; i++){
			ans +=2  ;
		}
	}
	else if(n>=21&n<40){
		for(int i = 1 ; i<=10 ; i++){
			ans += 6 ;
		}
		for(int i = 1 ; i<=10 ; i++){
			ans +=2  ;
		}
		for(int i = 1 ; i<=(n-20) ; i++){
			ans +=1  ;
		}
	}
	else if(n>=40){
		ans = 100 ;
	}
	
	cout<<ans<<"\n" ; 

}
