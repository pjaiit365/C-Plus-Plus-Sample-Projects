#include <iostream>
using namespace std;
int main()
{
	int s, m, h;
	{
		cout << "Enter time: ";
		cin >> s;
	}
	h = s / 3600;
	m= (s % 3600)/60;
	s = (s % 3600 )%60;
	if(h==0)
	{
	cout << " ";
	}
	else 
	{
		if(h==1)
		{
		cout << h << " hour, ";
		}
		else
		{
		cout << h << " hours, ";
		}
	}
		
	if(m==0)
	{
	cout << " "; 
	}
		else 
	{
		if(m==1)
		{
		cout << m << " minute, ";
		}
		else
		{
		cout << m << " minutes, ";
		}
	}
	if(s==0)
	{
	cout << " ";
	}
		else 
	{
		if(h==1)
		{
		cout << s << " second.";
		}
		else
		{
		cout << s << " seconds.";
		}
	}
}	             
