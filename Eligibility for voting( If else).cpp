#include<iostream>
using namespace std;
int main()
{
	int age;
	int a;
	cout<<"Enter Your Age \n"<<"Your Age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"\nYou are eligible to vote";
	}
	else
	{
	    a=18-age;
		cout<<"\nOops ! You are not eligible to vote right now.\n";
		cout<<"You have to wait for "<<a<<" more years to vote."	;
	}
    return 0;
	
}
