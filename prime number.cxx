#include <iostream>
using namespace std;

int main()
{
	int m;
	cout << "Enter a number:  \n" ;
	cin >> m;
	if(m == 2 || m == 3)
	{
		cout << "The number is a prime number.  \n";
	}
	else if(m %m == 0 && m%1== 0 && m % 2 != 0 && m % 3 != 0 && m%5 != 0)
	{
		cout << "The number is a prime number.  \n";
	}
	else
	{
		cout << "The number is not a prime number.  \n";
	}
}