#include<iostream>
using namespace std ;


int main(){
    int y ;
    while(cin>>y){
    	if(y%400==0){
    		cout<<"閏年\n" ;
		}
		else if(y%100!=0 && y%4==0){
			cout<<"閏年\n" ;
		}
		else {
			cout<<"平年\n" ;
		}
	}
}
