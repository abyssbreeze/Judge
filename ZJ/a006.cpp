#include<iostream>
#include<math.h>
using namespace std ;


int main(){
    int a , b , c ;
    int ans1 , ans2 ;
    cin>>a>>b>>c ;
    ans1 = (-1*b+sqrt( ( b*b ) - (4*a*c) ) ) /(2*a);
    ans2 = (-1*b-sqrt( ( b*b ) - (4*a*c) ) ) /(2*a) ;
    if( ( ( b*b ) - (4*a*c) ) <0 ){
    	cout<<"No real root\n" ;
	}
	else if( ( (b*b)-(4*a*c) ) >=0 ){
		if(ans1!=ans2){
    		cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2<<'\n' ;
		}
		else if(ans1==ans2){
		cout<<"Two same roots x="<<ans1<<'\n' ;
		}
	}
}
