#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;
	int a,b ; 
	int m,n ;
	int pn ;
	int ans ;
	while(cin>>a>>b){
		ans = 0 ;
		for(int m = a ; m<=b ; m++){
			if(m == 1){
				continue ;
			}
			pn = 1 ;
			for(int n = 2 ; n*n<= m ; n++){
				if(m%n == 0){
					pn = 0 ;
					break ;
				}
			}
			ans += pn ;
		}
		cout<<ans<<"\n" ;
	}	
}
