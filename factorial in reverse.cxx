#include <iostream>
using namespace std;
int main()
{
	int N, m, count, i;
	cout << "Enter factorialized number: ";
	cin >> N;
	m = 1;
	i = 1;
	while(N>0)
	{
	   N = N / i;
	    i++;
	   count = m;
	   m++;
	}
	cout << "Number that was factorialized is " << m;
}