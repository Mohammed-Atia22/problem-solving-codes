#include<bits/stdc++.h>
using namespace std;

int main()
{
   long double a,b,c,d;
   cin>>a>>b>>c;
   d=(a*b)/c;
   if(d>2147483647&&(floor(d)==ceil(d)))
   {
   	  cout<<"long long";
   }
   else if(d<=2147483647&&(floor(d)==ceil(d)))
   {
   	  cout<<"int";
   }
   else if(floor(d)!=ceil(d))
   {
   	 cout<<"double";
   }
   
}
