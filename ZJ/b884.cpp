#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  cin.sync_with_stdio(0) ;
  cin.tie(0) ;

  int i,n,x,y,yee;

  cin>>n;

  for(i=1;i<=n;i++){

    cin>>x>>y;

    if(x<0){

      x=-x;

    }

    if(y<0){

      y=-y;

    }

 yee=100-x-y;

    if(0<yee && yee<=30){

      cout<<"sad!"<<endl;

    }

    else if(30<yee && yee<=60){

      cout<<"hmm~~"<<endl;

    }

    else if(60<yee && yee<100){

      cout<<"Happyyummy"<<endl;
      
    }

    else{

      cout<<"evil!!"<<endl;

    }

  } 

  return 0 ;
}
