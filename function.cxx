#include <iostream>
using namespace std;
int main()
{
	int N, s, m, h;
	{
		cout << "Enter time: ";
		cin >> N;
	}
	if (N <= 60)
	{
		{
			cout << N << " seconds";
		}
	}
	else if (N > 60)
	{
	s = N % 60;
	m = N / 60;
	h = N / 360;
	{
		cout << h << " hours " << m << "minutes " << s << "seconds";
	}
	}
}	             
