#include<bits/stdc++.h>
using namespace std;
int main()
{
int ho;
int mi;
int se;
int zo;
cin>>ho;
cin>>mi;
cin>>se;
cin>>zo;
mi+=zo*30;
ho+=zo;
while(mi<0||mi>59)
{
    if (mi<0)
    {
        ho-=1;
        mi+=60;
    }
    if(mi>60)
    {
        ho+=1;
        mi-=60;
    }
}
while(ho<0||ho>35)
{
    if (ho<0)
    {
        ho+=36;
    }
    if (ho>35)
    {
        ho-=36;
    }
}
cout<<ho<<':';
if (mi<10)
{
    cout<<0<<mi;
}
else
{
    cout<<mi;
}
cout<<':';
if(se<10)
{
    cout<<0<<se;
}
else
{
    cout<<se;
}
}
