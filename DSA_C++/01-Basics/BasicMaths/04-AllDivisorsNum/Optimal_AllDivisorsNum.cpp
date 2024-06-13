#include<iostream>
#include<string>

using namespace std;

void AllDivisorsNum( int num);

int main() 
{
	int num;
	
	cout << "Enter a Number for finding its divisors :" << endl;
	cin >> num;
	
	AllDivisorsNum(num);

	return 0;
}

//To solve this problem, we are effectively running loop upto sqrt(num) 
//as after that every factor is repeated
//And then printing other set of divisors(on other side of sqrt(num))

// Time Complexity (TC)
// O(sqrt(N))-> N is number 
// Space Complexity (SC)
//O(1)
//Demerit: it doesnot print divisors in ordered fashion

void AllDivisorsNum(int num)
{	cout << "All divisors of number are: " << endl;
	for(int i=1; i*i<=num; i++) //compatsion portion is is substitute for 'sqrt' lib function
	{
		if(num%i == 0)
		{
			cout << i << " " ;
			if(num/i != i) // comparing for 6 in case of 36 AND num/i is another divisor
			cout <<  num/i << " " ;
		}
	}
	
}