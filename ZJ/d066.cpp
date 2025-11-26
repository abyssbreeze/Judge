#include<bits/stdc++.h>
using namespace std ;
	
int main(){
	int h ;
	int m ;
	cin>>h>>m ;
	if(h>= 7 & h<17){
		if(h==7&m<30){
			cout<<"Off School\n" ;
		}
		else{
			cout<<"At School\n" ;
		}
	}
	else{
		cout<<"Off School\n" ;
	}
}
