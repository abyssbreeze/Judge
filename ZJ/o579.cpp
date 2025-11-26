#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	int t ;
	int sum1 , sum2 , sum3 ;
	int ans ;
	cin>>t ;
	sum1 = t*3 ;
	if(t>300){
		sum2 = (t-300)*3 + 299 ;
	}
	else{
		sum2 = 299 ;
	}
	if(t>750){
		sum3 = (t-750)*3 + 699 ;
	}
	else{
		sum3 = 699 ;
	}
	
	ans = min( sum1 , min(sum2 , sum3) ) ;
	
	cout<<ans<<"\n" ;
	
}
