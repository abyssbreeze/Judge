#include<bits/stdc++.h>
using namespace std ;

int main(){
	sync_with_stdio(0);
	cin.tie(0);
	
	int	k ;
	int x1 , x2 ;
	int y1 , y2 ;
	int l = 0 ;
	
	cin>>k ;
	cin>>x1>>y1 ;
	cin>>x2>>y2 ;
	while(k>0){
		l += k ;
		
		if(l%x1 == 0){
			k -= y1 ;
		}
		if(l%x2 == 0){
			k -= y2 ; 
		}
		if(k<=0){
			break ;
		}
	}
	
	cout<<l<<"\n" ;
	
	return 0 ; 
}
