#include<iostream>
#include<string>
using namespace std ;

int main()
{
  int numper , sum=0 ;
  cout<<"enter the numper "<<endl;
  cin>>numper;
  if(numper>=0)
  {
  	 for(int i=0 ; i<=numper ; i++)
     {
     	sum+=i;
  	    cout<<sum<<endl;
     }
     cout<<"sum of numpers equal = "<<sum<<endl;

  }
  else
  cout<<"enter the positive numper"<<endl;
  
 
}
