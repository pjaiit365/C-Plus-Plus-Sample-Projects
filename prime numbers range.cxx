#include <iostream>
using namespace std;

int main()
{
	int m,N;
	cout << "Enter the last number of the range you want of prime numbers:  ";
	cin >> N;
	for(m=2;m<=N;m++){
	if(m == 2 || m == 3 || m==5)
	{
		cout <<m<< " ";
	}
	else if( m % 2 != 0 && m % 3 != 0 && m % 5 != 0)
	{
		cout <<m<< " ";
	}
	}
}