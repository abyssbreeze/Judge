#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int y ;
	int Y ;
	while(cin>>y){
		if(y>0){
			Y = (y)%12;
		}
		else {
			Y = 12-((abs(y)-1)%12) ;
		}
		if(Y==1){
			cout<<"鼠\n" ;
		}
		else if(Y==2){
			cout<<"牛\n" ;
		}
		else if(Y==3){
			cout<<"虎\n" ; 
		}
		else if(Y==4){
			cout<<"兔\n" ; 
		}
		else if(Y==5){
			cout<<"龍\n" ; 
		}
		else if(Y==6){
			cout<<"蛇\n" ; 
		}
		else if(Y==7){
			cout<<"馬\n" ; 
		}
		else if(Y==8){
			cout<<"羊\n" ; 
		}
		else if(Y==9){
			cout<<"猴\n" ; 
		}
		else if(Y==10){
			cout<<"雞\n" ; 
		}
		else if(Y==11){
			cout<<"狗\n" ; 
		}
		else if(Y==0|12){
			cout<<"豬\n" ; 
		}
	}
	
}#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;

	int y ;
	int Y ;
	while(cin>>y){
		if(y>0){
			Y = (y)%12;
		}
		else {
			Y = 12-((abs(y)-1)%12) ;
		}
		if(Y==1){
			cout<<"鼠\n" ;
		}
		else if(Y==2){
			cout<<"牛\n" ;
		}
		else if(Y==3){
			cout<<"虎\n" ; 
		}
		else if(Y==4){
			cout<<"兔\n" ; 
		}
		else if(Y==5){
			cout<<"龍\n" ; 
		}
		else if(Y==6){
			cout<<"蛇\n" ; 
		}
		else if(Y==7){
			cout<<"馬\n" ; 
		}
		else if(Y==8){
			cout<<"羊\n" ; 
		}
		else if(Y==9){
			cout<<"猴\n" ; 
		}
		else if(Y==10){
			cout<<"雞\n" ; 
		}
		else if(Y==11){
			cout<<"狗\n" ; 
		}
		else if(Y==0|12){
			cout<<"豬\n" ; 
		}
	}
	
}
