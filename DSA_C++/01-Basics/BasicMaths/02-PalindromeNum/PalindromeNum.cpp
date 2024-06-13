#include<iostream>
#include<string>

using namespace std;

string PalindromeNum( int num);

int main() 
{
	int num;
	string Palindrome;
	cout << "Enter a Number to check for palindrome" << endl;
	cin >> num;
	
	Palindrome = PalindromeNum(num);

	cout << "Lets Check for number is palindrome(true/false) : " << Palindrome << endl;

	return 0;
}

//In this problem, we are reversing the number, and comparing it with original number 

// Time Complexity (TC)
// O(N)-> N is number of digits in input number
// Space Complexity (SC)
//O(1)

string PalindromeNum(int num)
{	int dupNum = num;
	int revNumber=0;
	while(num!=0)
	{
		int lastDigit = num %10;
		revNumber = revNumber*10 + lastDigit;
		num = num /10;
	}
	if(revNumber == dupNum)
		return "True";
	else
		return "False";
	
}