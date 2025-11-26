#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n ;
	
	cin>>n ;
	
	int a[n] , d[n] ;
	long long sum[n] ;
	long long ans ;
	
	for(int i = 0 ; i < n ; i++ ){
		cin>>a[i]>>d[i] ;
		sum[i] = a[i]*a[i] + d[i]*d[i] ;
	}
	sort(sum , sum+n) ;
	ans = sum[n-2] ;
	
	for(int i = 0 ; i < n ; i++){
		if(ans == a[i]*a[i] + d[i]*d[i] ){
				cout<<a[i]<<' '<<d[i]<<'\n' ;
		}
	}

	
	return 0 ; 
}
