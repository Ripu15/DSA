#include<iostream>

using namespace std;

int Sum1ToN(int n)
{
	static int sum = 0;
	if(n==0)
	{
		return sum;
	}
	sum = sum+n;
	Sum1ToN(n-1);
}

int main()
{
	int n,sum;
	
	cout << "Plz Enter the upper limit to sum first N natural numbers: " ;
	cin >> n;
	
	sum = Sum1ToN(n);
	
	
	cout << "Sum of " << n << " natural numbers: " << sum << endl;
	
	
	return 0;
}