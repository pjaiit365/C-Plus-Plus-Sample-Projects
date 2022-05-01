#include <iostream>
using namespace std;
int main ()
{
	int N, sum, sum1, i;
	{
		cout << "Enter a postive integer whose sum is to be scrutinized: ";
		cin >> N;
	}
	if(N % 2 == 0)
	{
		for(i=0; i <= N;)
		{
			sum = 0;
			sum = sum + i;
		
			i= i+2;
			{
				cout << "Sum of even positive integers is" << sum<<endl;
			}
		}
		for (i=1; i <= N;)
		{
			sum1=0;
			sum1 = sum1+1;
		
			i = i + 2;
			{
				cout << "Sum of odd positive integers is " << sum1<<endl;
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