#include<iostream>
using namespace std;

 int main()
 
{
	int num, count=0, firstnumber, lastnumber;
	
	    cout<<"Enter Five numbers\n";
	    
	    while (count<5)
		{
	    cin>>num;
		}
	    if (count==0)
	    {
	    	firstnumber=num;
	        
			lastnumber=num;
	        count++;	
		}
	        
	int sum=firstnumber + lastnumber;
	cout<<"The sum of the FIrst number and last number is:\n";        
	
	return 0;
}
