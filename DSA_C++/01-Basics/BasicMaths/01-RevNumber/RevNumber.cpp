#include<iostream>
using namespace std;

int RevNum( int num);

int main() 
{
	int num, revNumber;
	cout << "Enter a Number " << endl;
	cin >> num;
	
	cout << "Lets Reverse the number " << num << endl;
	
	revNumber = RevNum(num);

	cout << "Reverse of number " << num << " is :" << revNumber << endl;

	return 0;
}

//In this problem, we are basically seprating the digit and making a number of it
//by multiplying it with 10 and adding seprated digit (revNum*10 + lastdigit)

// Time Complexity (TC)
// O(N)-> N is number of digits in input number
// Space Complexity (SC)
//O(1)

int RevNum(int num)
{
	int revNumber=0;
	while(num!=0)
	{
		int lastDigit = num %10;
		revNumber = revNumber*10 + lastDigit;
		num = num /10;
	}
	return revNumber;
}