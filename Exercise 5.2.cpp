#include<iostream>
using namespace std;

int main()
{
	//create a c++ program that applies a calculator function 
	
	//Local variables and chars
	int num1;
	int num2;
	char a;
	
	//Settings
	cout<<"This calculator only has MDAS: "<<endl;
	
	cout<<"Kindly enter any number : "<<endl;
	cin>>num1;
	
	cout<<"Kindly enter another any number : "<<endl;
	cin>>num2;
	
	cout<<"Choose the operational that will be used for calculation ex. +, -. *, /. f: "<<endl;
	cin>>a;
	
	//Process and output
	switch(a)
	{
		case '+':
		cout<<"The anawer is: "<<(num1+num2)<<endl;
		break;
		
		case '-':
		cout<<"The anawer is: "<<(num1-num2)<<endl;
		break;
		
		case '*':
		cout<<"The anawer is: "<<(num1*num2)<<endl;
		break;
		
		case '/':
		cout<<"The anawer is: "<<(num1/num2)<<endl;
		break;
		
		
		default:
		{
			cout<<"Error! operator is incorrect: "<<endl;
		    break;
		}
			
	}
	    return 0;
}
