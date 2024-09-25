#include<iostream>
using namespace std;

int main()
{
	//create a c++ program to determine if alphabet is vowel ;
	char g;
	
	cout<<"Kindly input your gender: "<<endl;
	cin>>g;
	
	switch(g)
	{
		case 'M':
		cout<<"Accepted: "<<endl;
		break;
		
		case 'F':
		cout<<"Accepted: "<<endl;
		break;
		
		case 'm':
		cout<<"Accepted: "<<endl;
		break;
		
		case 'f':
		cout<<"Accepted:"<<endl;
		break;
		
		
		default:
		{
			cout<<"It seems like you input a wrong letter, Please try again: "<<endl;
		    break;
		}
			
	}
	    return 0;
}
