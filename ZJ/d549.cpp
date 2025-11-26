#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	double a , b , c , d ;
	while(cin>>a>>b>>c){
		d = pow(pow(a,2) + pow(c,2) - pow(b,2) , 0.5 ) ;
		cout<<fixed<<setprecision(2)<<d<<'\n' 	;		
	}
	
	return 0 ;	
}
