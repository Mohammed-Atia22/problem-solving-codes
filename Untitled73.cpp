#include<iostream>
using namespace std;

int main()
{
	 int k,s,count=0;
	cin>>k>>s;
	for(int x=0;x<=k;x++)
	{
		if(x>s)
		{
			continue;
		}
		for(int y=0;y<=k;y++)
		{
			if(x+y>s)
			{
				continue;
			}
			for(int z=0;z<=k;z++)
			{
				if((x+y+z)==s)
				{
					count++;
				}
				else if((x+y+z)>9000)
				{
					break;
				}
			}
		}
	}
|
	cout<<count;
''}
