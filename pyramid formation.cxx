#include <iostream>
using namespace std;

int main()
{
	int rows, space;
	{
		cout << "Enter number of rows: ";
		cin >> rows;
	}
	for(int i = 0; i <= rows; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
		for (space = 0;space <= rows-i; space++ )
		{
			cout << " ";
		}
	}
}