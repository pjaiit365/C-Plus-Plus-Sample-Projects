#include <iostream>
using namespace std;

int main()
{
 int a, b, c;
 {
	cout << "Enter a number for a. \n";
	cin >> a;
 }
 {
 	cout << "Enter a number for b. \n";
 	cin>> b;
 }
 {
 	cout << "Enter a number for c. \n";
 	cin >> c;
 }
 	 if(a > b && a >c)
 	 {
 	 	cout << a << " is the larget number. \n";
 	 }
 	 else if(b > a && b > c)
 	 {
 	 	cout << b << " is the largest number. \n";
 	 }
 	 else if(c >a && c > b)
 	 {
 	 	cout << c << " is the largest number. \n";
 	 }
}