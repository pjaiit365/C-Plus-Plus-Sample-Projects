#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, N, fact, a, j, x, k, final, sum;
	cout<<"Enter number to be factorialized: ";
	cin >> N;
   i = 1;
	a=1;
	sum=0;
		cout << "Entter value for x: ";
		cin >> x;
	for(j=0; j <= N;j=j+2)
	{
		fact=1;
		for(i=1;i <=N; i++)
		{
			fact = fact * i;
		}
		x = x*exp(j);
		k=(-1) * exp(a);
		final = (k * x)/fact;
		a=a+1;
		sum = sum + final;
	}
			    {
   	cout << "Factorial of " << N <<" is " << fact << endl;
   }
	cout << "   Sin²(x) = "<< sum;
}