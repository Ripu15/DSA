#include<iostream>
#include<string>
using namespace std;

int Improved_CountDigits( int num);

int main() 
{
	int num, count;
	cout << "Enter a Number " << endl;
	cin >> num;
	
	cout << "Lets count number of digits in " << num << endl;
	
	count = Improved_CountDigits(num);

	cout << "Number of digits in " << num << " are/is :" << count << endl;

	return 0;
}

//In this problem, firstly convert the integer into string using
//to_string() function
//Then calculate its size using length() function.
//length() gives number of characters in converetd string and thus digits in the input number

// Time Complexity (TC)
// O(1)
// Space Complexity (SC)
//O(1)

int Improved_CountDigits(int num)
{
	string str = to_string(num);
	
	return str.length();
}