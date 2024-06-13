#include<iostream>

using namespace std;

void CheckPrimeNum( int num);

int main() 
{
	int num;
	
	cout << "Enter a Number to check if its PRIME :" << endl;
	cin >> num;
	
	CheckPrimeNum(num);

	return 0;
}
//Prime number i number that has exactly two divisors '1' and 'itself'
//To solve this problem, we are checking for divisibility with each number 1 to N, and counting its divisors


// Time Complexity (TC)
// O(N)-> N is number of digits in input number
// Space Complexity (SC)
//O(1)

void CheckPrimeNum(int num)
{	
	int count=0;
	for(int i=1; i<num+1; i++)
	{
		if(num%i == 0)
			count++;
	}
	if(count == 2)
		cout << "Its a prime number " << endl;
	else
		cout << "Its NOT a prime number " << endl;
	
}