#include <iostream>
using namespace std;
int main()
{
	int f, m, y;
	cout << "Enter distance in feets: ";
	cin >> f;
	m = f/5280;
	f = f %5280;
	y = f / 3;
	f = f % 3;	
	if(m==0)
	{
	cout << " ";
	}
	else 
	{
		if(m==1)
		{
		cout << m << " mile, ";
		}
		else
		{
		cout << m << " miles, ";
		}
	}
		
	if(y==0)
	{
	cout << " "; 
	}
		else 
	{
		if(y==1)
		{
		cout << y << " yard, ";
		}
		else
		{
		cout << y << " yards, ";
		}
	}
	if(f==0)
	{
	cout << " ";
	}
		else 
	{
		if(f==1)
		{
		cout << f << " foot.";
		}
		else
		{
		cout << f << " feet.";
		}
	}
}             	
	