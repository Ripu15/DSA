#include<iostream>
#include<string>

using namespace std;

void AllDivisorsNum( int num);

int main() 
{
	int num;
	
	cout << "Enter a Number to check for finding its divisors :" << endl;
	cin >> num;
	
	AllDivisorsNum(num);

	return 0;
}

//To solve this problem, we are checking for divisibility with, and comparing it with original number 

// Time Complexity (TC)
// O(N)-> N is number of digits in input number
// Space Complexity (SC)
//O(1)

void AllDivisorsNum(int num)
{	cout << "All divisors of number are: " << endl;
	for(int i=1; i<num+1; i++)
	{
	if(num % i == 0)
		cout << i << " " ;
	}
	
}