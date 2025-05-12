#include<iostream>
using namespace std;
struct studinfo // declared before main
{
	int stid;
	string name;
}st[5];
main()
{
	//studinfo st;
	int n,i;
	cout<<"Enter no of students";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	
		cout<<"Enter an ID:";
		cin>>st[i].stid;
		cout<<"\n Enter a name";
		cin>>st[i].name;
	}
	
	for(i=0;i<n;i++)
	{
		
		cout<<"\nId:"<<st[i].stid;
		cout<<"\nName:"<<st[i].name;
		
	}

	
		
}
