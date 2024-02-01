#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	//a=log(a);
	//b=log(b);
	//c=log(c);
	//d=log(d);
	if(a*b+c==d)
	{
		cout<<"YES"<<endl;
	}
	else if(a*b-c==d)
	{
		cout<<"YES"<<endl;
	}
	else if(a-b+c==d)
	{
		cout<<"YES"<<endl;
	}
	else if(a+b-c==d)
	{
		cout<<"YES"<<endl;
	}
	else if(a+b*c==d)
	{
		cout<<"YES"<<endl;
	}
	else if(a-b*c==d)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
}
//34688642
//-851839419
//395784949
//490743112
//-432300451 509430974 -600857890 -220227239212711384
