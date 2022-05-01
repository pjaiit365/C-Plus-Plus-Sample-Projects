#include <iostream>
# include <math.h>
using namespace std;
int main()
{
	int n, fact, a, i, j, k, x, sum, final;
	{
		cout << "Enter number to be factorialised: ";
		cin >> n;
	}
	a=0;
	fact = 1;
	for(i = 1;i <= n; i++)
	{
		fact = fact * i;
	}	
		for(j=0;j<= n; j==j+2)
		{
			cout << "Enter value for x: ";
			cin >> x;
			x= x*exp(j);
			k=(-1)*exp(a);
			final= (k * x) / fact;
			sum= 0;
			sum = sum + final;
			a++;
		}
		cout << "Factorial is of "<< n << " is " <<fact;
		cout << "    Sin²(x) = " << sum;
}