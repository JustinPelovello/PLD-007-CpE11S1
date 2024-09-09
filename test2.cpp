#include <iostream>
    using namespace std;
    
        int main() 
        {	
                //local variable
            int x=4,y=2,a=0,s=0,d=0,p=0,q=0,m=0;
            
            a = (x+y)/3.0;
            s = (x+y);
            d = (x-y);
            p = (x*y);
            q = (x%y);
            m = (x/y);
            
            cout<<"The average is: "<<a<<endl;
            cout<<"The sum is: "<<s<<endl;
            cout<<"The difference is: "<<d<<endl;
            cout<<"The product is: "<<d<<endl;
            cout<<"The quotient is: "<<q<<endl;
            cout<<"The mod is: "<<m<<endl;
            
            return 0;
        
		}
