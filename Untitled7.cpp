#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name1 , name2 , name3  ;
	int numper ;
	cout<<"enter your names in the class "<<endl;
	cin>>name1>>name2>>name3 ;
	
   for(int i=1 ; i<=3 ; i++)
   {
 //  	  if(name1[0]<=name1[0]&&name1[0]<=name3[0])
   //	  {
   	 // 	 cout<<name1 << " in the "<< i <<"of the class "<<endl;
   	  //	 break;
   	  	 
   	  	cout<<"THE boy in the  " <<i<< " equal "<<(name1[0]>name2[0]&&name1[0]>name3[0])<<endl;
   	  	cout<<"THE boy in the  " <<i<< " equal "<<(name2[0]>name3[0]&&name2[0]>name1[0])<<endl;
   	  	cout<<"THE boy in the  " <<i<< " equal "<<(name3[0]>name1[0]&&name3[0]>name1[0])<<endl;
	}
 //  	  else if(name2[0]<=name1[0]&&name2[0]<=name3[0])
   //	  {
   	 // 	 cout<<name2 << " in the FIRST of the class "<<endl;
   	  //	 break;
	  //}
   	  //else if(name3[0]<=name1[0]&&name3[0]<=name2[0])
   	  //{
   	  	// cout<<name1 << " in the FIRST of the class "<<endl;
   	  	// break;
	  //}
//	  else
//	  cout<<"enter your name "<<endl;
   	 
   
}

