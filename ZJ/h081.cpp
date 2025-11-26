#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	int n , d ;
	bool sell = false ;
	int sell_money , buy_money ;
	int sum = 0 ;
	cin>>n>>d ;
	
	int a[n+5] ;
	
	for(int i = 1 ; i<=n ; i++ ){
		cin>>a[i] ;
	}
	buy_money = a[1] ;
	for(int i = 1 ;i<=n ; i++){
		if( (a[i] >= buy_money+d) && !sell){
			sum += a[i] - buy_money ;
			sell_money = a[i] ;
			sell = true ;
		}
		if( (a[i] <= sell_money-d) && sell){
			buy_money = a[i] ;
			sell = false ;
		}
	}
	
	cout<<sum<<'\n' ;
	 
	return 0 ;
}
