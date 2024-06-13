#include<iostream>
#include<bits/stdc++.h>

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

//In this problem, use log to base 10, 

// Time Complexity (TC)
// O(1)
// Space Complexity (SC)
//O(1)

int Improved_CountDigits(int num)
{
	int count = (int)(log10(num) + 1);
	
	return count;
}