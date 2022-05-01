#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int b, sum, count,i ,m, N, t;
	{
	cout << "Number in base 2 to be found in base 10: ";
	cin >> N;
	}
	m=1;
	t=N;
	for(i=0; i <= 5;i++)
	{
		b = N % 10;
		N = (N-b)/10;
		b= b * 2^i;
		cout << "Value for each element = " << sum<<endl;
			sum = sum + b;
			count = m;
			m++;
	}
	cout <<"    "<< t<< " in base 10 is " << sum;
}