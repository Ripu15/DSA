#include<iostream>
#include<string>

using namespace std;

void CheckPrimeNum( int num);

int main() 
{
	int num;
	
	cout << "Enter a Number to check if its a PRIME number :" << endl;
	cin >> num;
	
	CheckPrimeNum(num);

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

void CheckPrimeNum(int num)
{	
	int count =0;

	for(int i=1; i*i<=num; i++) //comparsion portion is substitute for 'sqrt' lib function
	{
		if(num%i == 0)
		{
			cout << "First i or factor is :" << i  << endl;
			count++ ;
			//check for other solution 
			if(num/i != i) // comparing for 6 in case of 36 
			{
				cout << "Other i or factor is: " << i << endl;
				count++;
			}
			// int div = num/i;
			// cout << "Result After division :" << div << endl;
			// cout << endl << endl;
				
		}
	}
	cout << "Number of divisors are :" << count << endl;
	if(count == 2)
		cout << "Its a PRIME Number !!!" << endl;
	else
		cout << "Its NOT a Prime Number !!!"<< endl;
	
}