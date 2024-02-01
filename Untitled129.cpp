#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int size1=s.size();
	char arr1[size1];
	int arr2[size1], start=0,end=-1,c=0,z=0,p=0;
	sort(s.begin(),s.end());
	for(int i=0;i<size1;i++)
	{
		cout<<" i  ="<<i<<endl;
		if(s[i]==s[start])
		{
			c++;
			cout<<c<<endl;
			end++;
			cout<<end<<endl;
		}
		else{
			arr1[z]=s[start];
			cout<<s[start]<<endl;
			arr2[z]=c;
			cout<<c<<endl;
			z++;
			cout<<z<<endl;
			start=end+1;
			cout<<start<<endl;
			p=p+c;
			c=0;
			i=i-1;
			cout<<i<<endl;
		}
	}
	for(int i=0;i<z;i++)
	{
		cout<<arr1[i]<<" : "<<arr2[i]<<endl;
	}
    cout<<s[size1 - 1]<<" : "<<size1-p<<endl;
}
