#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, D, x¹, x²;
	{
		cout << "Enter value for a: \n";
		cin >> a;
	}
	{
		cout << "Enter value for b: \n";
		 cin >> b;
	}
	{
		cout << "Entet value for c: \n";
		cin >> c;
	}
	D = (b * b) - 4 * a * c;
	if(D >=0)
	x¹ = ((-b + sqrt(D)) / 2 * a);
	{
		cout << x¹;
	}
	x² = ((-b - sqrt(D)) / 2 * a);
	{
		cout << x²;
	}
}
	