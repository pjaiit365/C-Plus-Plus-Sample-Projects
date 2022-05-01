#include <iostream>
using namespace std;
int main ()
 {
 	int N, i¹, i², sum, i;
 	{
 		cout << "Enter to which term to be printed: ";
 		cin >> N;
 	}
 	i¹ = 0;
 	i² = 1;
 	if(N == 1)
 	{
 	  {
 		cout << i¹ << endl;
 	  }
 	}
 	else if(N ==2)
 	{
 	  {
 		cout << i² << endl;
 	  }
 	}
 	else if (N >= 3)
 	{
 	 
 		cout << i¹ << ", " << i² << ", ";
 	  
 	 for(i = 2; i < N;i++)
 	 {
 	 sum = i¹ + i²; 
 	 i¹ = i²;
 	 i² = sum;
 	 
 	 	cout << sum << " ,";
 	 }
 	}
 }