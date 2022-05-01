#include <iostream>
using namespace std;
int main ()
{
	int N, x, sum, a, odd, i;
		x = 0;
		a=0;
	{
		cout << "Enter a postive integer whose sum is to be scrutinized: ";
		cin >> N;
	}
	if(N % 2 == 0)
	{
		for(i=2; i <= N;i = i +2)
		{
			sum = x + i;
			x = i;
			i = sum;
			i= i+2;
			{
				cout << "Sum of even positive integers is " << sum<<endl;
			}
		}
		for (i=1; i <= N;i = i + 2)
		{
			odd= a+i;
			a = i;
			i = odd;	
			i=i+2;	
			{
				cout << "Sum of odd positive integers is " << odd<<endl;
			}
		}
	}
		else 
		{
		   {
			cout << "Number is a negative integer."<<endl;
	    	}
		}
}