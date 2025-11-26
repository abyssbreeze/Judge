#include<bits/stdc++.h>
using namespace std ;
	
int main(){
	int num[3] ;
	int s,m,h ;
	for(int i = 0 ; i<3 ; i++){
		cin>>num[i] ;
	}
	sort(num,num+3) ;
	s = num[0] ;
	m = num[1] ;
	h = num[2] ;
	if(s+m>h){
		if(s*s + m*m == h*h){
			cout<<s<<" "<<m<<" "<<h<<"\n" ; 
			cout<<"Right\n" ;
		}
		else if(s*s + m*m < h*h){
			cout<<s<<" "<<m<<" "<<h<<"\n" ; 
			cout<<"Obtuse\n" ;
		}
		else if( s*s + m*m > h*h){
			cout<<s<<" "<<m<<" "<<h<<"\n" ; 
			cout<<"Acute\n" ;
		}
	}
	else{
		cout<<s<<" "<<m<<" "<<h<<"\n" ; 
		cout<<"No\n" ;
	}
}
