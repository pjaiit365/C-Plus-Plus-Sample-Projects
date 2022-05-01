#include <iostream>
using namespace std;
int main()
{
	int N, sum, i, f;
	sum = 0;
	{
		{
		cout << "Enter the number whose factors are to be found: ";
		     cin >> N;
		}
		for(i =1;i <= N/2; i++)
		{
			if(N % i == 0)
			{
				cout << "One factor of " << N << " is " <<i<<endl;
			
			sum = sum + i;
			}
		}
		cout << "Sum of factors is " << sum << endl;
		
		if(sum == N)
		{
			cout << N << " is a perfect number.";
		}
		else if(sum > N)
		{
			cout << N << " is an abundant number.";
		}
		else 
		{
			cout << N <<" is a deficient number.";
		}
	}
}