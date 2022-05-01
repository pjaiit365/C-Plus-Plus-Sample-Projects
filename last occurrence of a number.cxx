#include <iostream>
using namespace std;
int main()
{
	int N, pos, p, n, j, x, i;
	p=0;
	cout << "Enter number of numbers: ";
	cin >> n;
	cout << "Which number are you looking for: ";
	cin >> pos;
	for(i = 0; i < n; i++)
	{
		cout << "Enter number: ";
		cin >> N;	
			if(pos ==N)
			{
				p= i+1 ;
			}
	}
	if(p != 0)
	{
	cout << "The last occurrence of "<< pos <<" is "<<p<< "th position.";
	}
	else
	{
		cout << pos << " not in the numbers given! ";
	}
}