#include<bits/stdc++.h>
using namespace std;

int main()
{
	string st1,st2;
	char s;
	cin>>st1>>st2;
	cout<<st1.size()<<" "<<st2.size()<<endl;
	cout<<st1+st2<<endl;
	s=st1[0];
	st1[0]=st2[0];
	st2[0]=s;
	cout<<st1<<" "<<st2;
	
}
