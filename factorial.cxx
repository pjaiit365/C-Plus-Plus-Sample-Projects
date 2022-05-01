#include <iostream>
using namespace std;
int main()
{
   int factorial, i, n;
   {
   	cout << "Enter number whose factorial is to be run: ";
   	cin >> n;
   }
   factorial = 1;
   i = 1;
   do
   {
   (factorial = factorial * i, i++);
   {
   	cout << "factorial of number is " << factorial << endl;
   }
   }
   while (i <= n);
}
