#include <iostream>
using namespace std;
int main()
{
	int N, rem, total, M;
	M = N;
	{
		cout << "Enter the value to be used: ";
		cin >> N;
	}
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
	   cout << "Mission was a success";
	}
	else
	{
		cout <<"Mission was a failure";
	}
}
		