#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float ng, lg, x, N;
	cout << "Enter number whose square root is to be found: ";
	cin >> N;
	lg= 1000;
	do
	{
	    ng = 0.5 * (lg + (N/lg));
	    x = abs(ng - lg);
	    cout << "New guess is " << ng << endl;
	    cout << " Difference is " << x << endl;
	    lg = ng;
	}
	while(x >= 0.00000001);
}