#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3,s4,total;
	float pr;
	cout<<"Enter subject1 mark:";
	cin>>s1;
	cout<<"Enter subject2 mark:";
	cin>>s2;
	cout<<"Enter subject3 mark:";
	cin>>s3;
	cout<<"Enter subject4 mark:";
	cin>>s4;
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40)
{

		total=s1+s2+s3+s4;
		cout<<"\nTotal="<<total;
		pr=total/4;
		cout<<"\nPR="<<pr;
	
	if(pr>=70)
	{
		cout<<"\n First class with distinction";
	}
	
	if(pr>=60)
	{
		cout<<"\n First class ";	
	}
	
	if(pr>=50)
	{
		cout<<"\n Second class";
	}
	
	if(pr>=40)
	{
		cout<<"\n third class";
	}
}
	else
	{
		cout<<"\n Fail!!!!";
	}
	
}
