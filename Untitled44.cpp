#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,i,arr[i],count1=0,count2=0,count3=0,count4=0;
  cin>>a;
  for(int i=0;i<a;i++)
  {
  	cin>>arr[i];
  }
  
  for(int i=0;i<a;i++)
  {
    if(((arr[i])%2==0)&&((arr[i]>0)))
  	{
  	    count3++; 
		count1++; 
	}
	else if(arr[i]%2!=0&&arr[i]>0)
  	{
  	    count4++ ;
		count1++; 
	}
	else if(((arr[i])%2==0)&&((arr[i]<0)))
  	{
  	    count3++; 
		count2++; 
	}
	else if(arr[i]%2!=0&&arr[i]<0)
  	{
  	    count4++ ;
		count2++; 
	}
	else if(arr[i]==0)
	{
		count3++;
	}
		
  }
  // mohamed MOHAMED
  cout<<"Even: "<<count3<<endl;
  cout<<"Odd: "<<count4<<endl;
  cout<<"Positive: "<<count1<<endl;
  cout<<"Negative: "<<count2<<endl;
}
