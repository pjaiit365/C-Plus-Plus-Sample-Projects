#include <iostream>
using namespace std;
int main()
{
	int a, sum, b;
	sum= 0;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	if(a > 0 && b > 0)
	{
		    
	     while(a >= 1)
	     {
	     		if(a % 2 == 1) 
		    {
		    	    	sum = sum +b;
		    }
		    a = a / 2;
		    b = b * 2;
		    cout << "A is " << a<<endl;
		    cout <<"B is " << b<<endl;
	     }
		    
	      cout << "Product of numbers= " << sum<<endl;
	      }
	 else 
	   {
	   	cout << "Enter positive integers.";
	   }
}