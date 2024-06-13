#include<iostream>
using namespace std;

int Brute_CountDigits( int num);

int main() 
{
	int num, count;
	cout << "Enter a Number " << endl;
	cin >> num;
	
	cout << "Lets count number of digits in " << num << endl;
	
	count = Brute_CountDigits(num);

	cout << "Number of digits in " << num << " are/is :" << count << endl;

	return 0;
}

//In this problem, we are dividing the input number by 10 in loop unless it becomes zero.
//every time divide by 10 strips off the number of its last digit

// Time Complexity (TC)
// O(log10(N))-> N is number of digits in input number
// Space Complexity (SC)
//O(1)

int Brute_CountDigits(int num)
{
	int count = 0;
	while(num!=0)
	{
		num = num /10;
		count ++;
	}
	return count;
}