#include<iostream>
#include<math.h>
using namespace std ;


int main(){
	int y ;
	cin>>y ;
	if(y>=0&y<=5){
		cout<<"0\n" ;
	}
	else if(y>=6&y<=11){
		cout<<"590\n" ;
	}
	else if(y>=12&y<=17){
		cout<<"790\n" ;
	}
	else if(y>=18&y<=59){
		cout<<"890\n" ;
	}
	else if(y>=60){
		cout<<"399\n" ;
	}
	
	return 0 ;
}
