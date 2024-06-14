#include<iostream>

using namespace std;

int factorial(int n)
{
	if(n>1)
	{
		return(n * factorial(n-1));
	}
	else
		return 1;
	
}
int main()
{
	int n,fact;
	
	cout << "Plz Enter number to calc its factorial: " ;
	cin >> n;
	fact = factorial(n);
	cout << "Factorial of " << n << " number: " << fact << endl;
	
	return 0;
}