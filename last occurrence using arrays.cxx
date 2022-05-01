#include <iostream>
using namespace std;
int main()
{
	int i, x, c, p;
	cout << "How many numbers are to be tested: ";
	cin >> x;
	int myArr[x];
	cout << "Which number is to be checked? \n";
	cin >> c;
	for (i = 0;i < x;i++)
	{
		cout << "Enter number: ";
		cin >> myArr[i];
		if(c==myArr[i])
			{
				p = i +1;
			}
	}
	cout << "Last occurence of " << c << " is "<<p <<" th position.";
}