// #include <bits/stdc++.h>
  #include<stdio.h>
  using namespace std;


  int main() {
    //cin.sync_with_stdio(0) ;
    //cin.tie(0) ;

    int n ;
    int num[100] = {0} ;
    int ai ;
    //cin>>n ;
    scanf("%d",&n) ;
    for (int i = 0; i < n; i++)
    {
      //cin>>ai ;
      scanf("%d",&ai) ;
      num[ai-1]++ ;
    }
    for (int i = 0; i < 100; i++)
    {
      if(num[i]>0){
        for (int j = 0; j < num[i]; j++)
        {
        //cout<<i+1<<" " ;
        printf("%d ",i+1) ;
        }
        
      }
    }
    
    
    return 0 ;
  }
