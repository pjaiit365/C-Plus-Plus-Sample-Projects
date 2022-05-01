#include <iostream>
using namespace std;
int main()
{
	int r, tr, tw, tc, tn ,w, t, c,n;
	cout << "Enter marks for Reading Section: ";
	cin >> r;

	cout << "Enter marks for Writing amd Language Section: ";
	cin >> w;
	cout << "Enter marks for Math with Calculator Section: ";
	cin >> c;
	cout << "Enter marks for Math without Calculator Section: ";
	cin >> n;
	tr = 7.6923076923 * r;
	tw= 9.09090909 * w;
	tc = 13.1578947368* c;
	tn = 15 * n;
	t = tr + tw + tc +tn;
	cout << "Your SAT score is "<< t;
}