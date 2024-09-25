#include<iostream>
using namespace std;

int main()
{
	//create a c++ program to determine if alphabet is vowel ;
	char c;
	
	cout<<"Enter any letter or character: "<<endl;
	cin>>c;
	
	cout<<"Enter any character again: "<<endl;
	
	switch(c)
	{
		case 'a':
		cout<<"That is a vowel! Good choice: "<<endl;
		break;
		
		case 'A':
		cout<<"Still a vowel, Not bad: "<<endl;
		break;
		
		case 'e':
		cout<<"That is a vowel! You're fantastic: "<<endl;
		break;
		
		case 'E':
		cout<<"Still a vowel, Nice try:"<<endl;
		break;
		
		case 'i':
		cout<<"That is a vowel! Nice: "<<endl;
		break;
		
		case 'I':
		cout<<"Stil a vowel, So close!: "<<endl;
		break;
	
		case 'o':
		cout<<"That is a vowel! You're doing great: "<<endl;
		break;
		
		case 'O':
		cout<<"Still a vowel, Nice try: "<<endl;
		break;
		
		case 'u':
		cout<<"That is a vowel, Good: "<<endl;
		break;
		
		case 'U':
		cout<<"Still a vowel, Good try: "<<endl;
		break;
		
		default:
		{
			cout<<"consanant: "<<endl;
		    break;
		}
			
	}
	    return 0;
}
