#include<iostream>
using namespace std;

void PrintNTo1(int n)
{
	if( n==0 )
		return;

	else{
		cout << n << " ";
		PrintNTo1(n-1);
	}
}

int main()
{
	int n ;
	cout << "Plz Enter the upper limit for printing N natural numbers: " ;
	cin >> n;
	 
	PrintNTo1(n) ;
		
	return 0;
}