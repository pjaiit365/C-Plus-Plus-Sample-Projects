#include <iostream>
using namespace std;
int main()
{
	int N, rem, total, M;
	{
		cout << "Enter the value to be used: ";
		cin >> N;
	}
		M = N;
	total = 0;
	while(N > 0)
	{
		rem = N % 10;
		N = N - rem;
		N = N / 10;
		total = total + (rem * rem * rem);
	}
		{
		cout << "The sum of the remainders of the individual numbers is " << total << endl;
	   }
	if (M == total)
	{
	   cout << M << " is an armstrong number.";
	}
	else
	{
		cout << M <<" is not an armstrong number.";
	}
}
		