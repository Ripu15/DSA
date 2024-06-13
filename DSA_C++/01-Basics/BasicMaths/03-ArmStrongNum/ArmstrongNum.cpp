#include<iostream>
#include<string>

using namespace std;

string ArmstrongNum( int num);

int main() 
{
	int num;
	string Armstrong;
	cout << "Enter a Number to check for Armstrong" << endl;
	cin >> num;
	
	Armstrong = ArmstrongNum(num);

	cout << "Lets Check for number is Armstrong(true/false) : " << Armstrong << endl;

	return 0;
}

//Armstrong is a number that equal to sum of cubes of its digits
//We are extracting digits-> cubing them and adding them

// Time Complexity (TC)
// O(N)-> N is number of digits in input number
// Space Complexity (SC)
//O(1)

string ArmstrongNum(int num)
{	int dupNum = num;
	int sum=0;
	while(num!=0)
	{
		int lastDigit = num %10;
		//cout << "Last Digit: " << lastDigit << endl;
		sum = sum + lastDigit*lastDigit*lastDigit;
		//cout << "Sum: " << sum << endl;
		num = num /10;
		//cout << "num: " << num << endl;
	}
	if(sum == dupNum)
		return "True";
	else
		return "False";
	
}