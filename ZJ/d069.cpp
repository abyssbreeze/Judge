#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ;
	int y ;
	cin>> t ;
	for(int i = 1 ; i<=t ; i++){
		cin>> y ;
		if(y%400!=0 && y%100!=0){
			if(y % 4 == 0){
				cout<<"a leap year\n" ;
			}
			else {
				cout<<"a normal year\n" ;
			}
		}
		else if (y%400==0 && y%100==0){
			cout<<"a leap year\n" ;
		}
		else {
			cout<<"a normal year\n" ;
		}
	}
	return 0 ;
}
