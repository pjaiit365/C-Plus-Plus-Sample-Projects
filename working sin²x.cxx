#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, b, i, x, a, sin, sum, fact, k;
	cout << "Enter the last power of x to be examined: ";
	cin >> N;
	cout << "Enter the value of x to be used: ";
	cin >> x;
	fact = 1;
	sum = 1;
	a = 1;
	for(b = 2;b <= N;b = b + 2)
	{
		for(i=1; i <= b;i++)
		{
			fact = fact * i;
		}
		k = (-1)*exp(a);
		x = x * exp(b);
		sin = k * x / fact;
		sum= sum + sin;
		a++;
	}
	cout << "	Sin²x = " << sum;
}