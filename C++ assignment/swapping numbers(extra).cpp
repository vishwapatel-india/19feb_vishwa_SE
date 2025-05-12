#include<iostream>
using namespace std;
main()
{
	// take two input
	int a=3, b=5, temp;
	
	// print the above value
	cout<<"The value of A before swapping="<<a<<"\n"
		 <<"The value of B before swapping="<<b;
	
	//temporary variable;
	temp=a;
	a=b;
	temp=b;
	
	//value after swapping
	cout<<"\nafter swapping A=" <<a<<"\n"<<"after swapping B=" <<b;
}
