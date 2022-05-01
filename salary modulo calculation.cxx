#include <iostream>
using namespace std;
int main()
{
   int N, n, i, Amount, children, Salary, income, levy, deductions, Net_Pay;
   {
   	cout << "Enter number of workers in the company: ";
   	cin >> N;
    }
    for(i = 1; i <= N; i++)
    {
    	{
    		cout << "Enter the number of hours the worker worked in a week: ";
    	cin >> n;
    	}
    	   
    	    if(n >= 40)
    	    {
    	     Salary = 50 * n;
    	    }
    	    else 
    	    {
    	    Salary = 50 * 40 + (n - 40) * 75;
    	    }
    	    
    	     income = Salary * 0.15;
    	     levy = Salary * 0.025;
    	    {
    	    	cout << "Enter the number of children: ";
    	    	cin >> children;
    	    }
  	if(children > 3)
  	{
    	     Amount = 10 * (children - 3);
  	}
    	    else 
    	    {
    	     Amount = 0;
    	    }
    	
  	
  	deductions = income + levy + Amount;
  		    
  	Net_Pay = Salary - deductions;
  	{
  		cout << "Net Pay is " << Net_Pay << endl;
  	}
    }
}
